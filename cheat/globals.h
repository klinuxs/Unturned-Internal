#pragma once
#include "..\includes.h"
#include "Config/Settings.h"
#include <map>
const char* version = "1.0.1";
// 1.0.0 -> 1.1.0
// this is my way of coping when im out of state for 4/20

#define LOG(fmt, ...) printf(fmt "\n", __VA_ARGS__)

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg,
	WPARAM wParam, LPARAM lParam);

struct GunValues {
	float bsar;
	float rmaxx;
	float rmaxy;
	float rminx;
	float rminy;
};

enum mono_eye
{
	SINGLE,
	BOTH,
	MONO,
};

namespace globals
{
	Present oPresent;
	HWND window = NULL;
	WNDPROC oWndProc;
	ID3D11Device* pDevice = NULL;
	ID3D11DeviceContext* pContext = NULL;
	ID3D11RenderTargetView* mainRenderTargetView;
	const char* version = "1.0.0";

	bool menu_vis = false;

	Settings settings = Settings();
}


class Player
{
public:
	SDK::SDG::Unturned::SteamPlayer* player;
	Player(SDK::SDG::Unturned::SteamPlayer* p) : player(p) {}

	auto Model() {
		return player->_model();
	}
	auto Channel() {
		return (SDK::SDG::Unturned::SteamChannel*)(player);
	}
	auto Owner() {
		return (SDK::SDG::Unturned::SteamPlayer*)(Channel()->owner());
	}
	auto ID() {
		return (SDK::SDG::Unturned::SteamPlayerID*)(Owner());
	}
	auto Look() {
		return (SDK::SDG::Unturned::PlayerLook*)(player);
	}
	auto Life() {
		return (SDK::SDG::Unturned::PlayerLife*)(player);
	}
	auto Movement() {
		return (SDK::SDG::Unturned::PlayerMovement*)(player);
	}
	auto Clothes() {
		return (SDK::SDG::Unturned::HumanClothes*)(player);
	}
	auto Transform() {
		return (SDK::UnityEngine::Transform*)(player);
	}
	auto Health() {
		return Life()->_health();
	}
	auto Height() {
		return Look()->characterHeight();
	}
	auto Skeleton() {
		return Model()->GetChild(0)->GetChild(1);
	}
	auto Spine() {
		return Skeleton()->GetChild(2);
	}
	auto Skull() {
		return Spine()->GetChild(0);
	}
	auto Spot() {
		return Skull()->GetChild(0);
	}
	auto Left_Shoulder() {
		return Spine()->GetChild(4);
	}
	auto Left_Arm() {
		return Left_Shoulder()->GetChild(0);
	}
	auto Left_Hand() {
		return Left_Arm()->GetChild(0);
	}
	auto Left_Hook() {
		return Left_Hand()->GetChild(0);
	}
	auto Right_Shoulder() {
		return Spine()->GetChild(5);
	}
	auto Right_Arm() {
		return Right_Shoulder()->GetChild(0);
	}
	auto Right_Hand() {
		return Right_Arm()->GetChild(0);
	}
	auto Right_Hook() {
		return Right_Hand()->GetChild(0);
	}
	auto Left_Hip() {
		return Skeleton()->GetChild(0);
	}
	auto Left_Leg() {
		return Left_Hip()->GetChild(0);
	}
	auto Left_Foot() {
		return Left_Leg()->GetChild(0);
	}
	auto Right_Hip() {
		return Skeleton()->GetChild(1);
	}
	auto Right_Leg() {
		return Right_Hip()->GetChild(0);
	}
	auto Right_Foot() {
		return Right_Leg()->GetChild(0);
	}
	SDK::UnityEngine::Vector3 Position() {
		SDK::UnityEngine::Vector3 pos;
		Model()->get_position_Injected(pos);
		return pos;
	}
	SDK::UnityEngine::Vector3 SpotPosition() {
		SDK::UnityEngine::Vector3 pos;
		Spot()->get_position_Injected(pos);
		return pos;
	}
	SDK::UnityEngine::Vector3 LeftArmPosition() {
		SDK::UnityEngine::Vector3 pos;
		Left_Arm()->get_position_Injected(pos);
		return pos;
	}
	SDK::UnityEngine::Vector3 RightArmPosition() {
		SDK::UnityEngine::Vector3 pos;
		Right_Arm()->get_position_Injected(pos);
		return pos;
	}


};


namespace shared_data
{
	bool ready = false;

	SDK::UnityEngine::Resolution resolution;
	SDK::UnityEngine::Vector2 vector2;
	SDK::UnityEngine::Vector3 vector3;
	SDK::SDG::Unturned::Player* localplayer;
	SDK::UnityEngine::Camera* main_camera;

	std::map < ENT_T, uintptr_t > entity_loop;
	std::map<std::string, GunValues> gunValuesMap;

	void ent_insert(ENT_T t, uintptr_t list)
	{
		entity_loop.insert(std::pair < ENT_T, uintptr_t >(t, list));
	}

	void insertGunValues(const std::string& gunName, float bsar, float rmaxx, float rmaxy, float rminx, float rminy) {
		GunValues values{ bsar, rmaxx, rmaxy, rminx, rminy };
		gunValuesMap[gunName] = values;
	}
	bool assert_w2s(SDK::UnityEngine::Vector3 world_pos, SDK::UnityEngine::Vector3& screen_pos)
	{
		main_camera->WorldToScreenPoint_Injected(world_pos, 2, screen_pos);
		if (screen_pos.z <= 0)
			return false;

		screen_pos.x = screen_pos.x;
		screen_pos.y = resolution.get_height() - screen_pos.y;	// bossotron code is very important for W2S to work!!
		screen_pos.z = screen_pos.z;

		return true;
	}
}

namespace Functions
{
}

namespace renderer
{
	void InitImGui()
	{
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO();
		io.ConfigFlags = 0;
		ImGui_ImplWin32_Init(globals::window);
		ImGui_ImplDX11_Init(globals::pDevice, globals::pContext);
		ImFont* font = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Tahoma.ttf", 14);
		io.FontDefault = font;
		ImCandy::Theme_Makn();

	}


	void setup_font()
	{
		ImGuiIO& io = ImGui::GetIO();
		ImFontConfig FontConfig
		{
		};
		FontConfig.PixelSnapH = true;
		FontConfig.OversampleH = 5;
		FontConfig.OversampleV = 5;
		FontConfig.RasterizerMultiply = 1.2f;
		FontConfig.GlyphRanges = io.Fonts->GetGlyphRangesCyrillic();
		ImFontConfig imst;
	}
}

namespace cleanup
{
	void setup_resolution()
	{
		shared_data::resolution =
			SDK::UnityEngine::Screen::get_currentResolution();

		LOG("X: %d Y: %d", shared_data::resolution.get_width(),
			shared_data::resolution.get_height());
	}

	void setup_esp(Settings settings)
	{
		settings.players.type = ENT_T::player;
		settings.aimbot.type = ENT_T::player;
		settings.npc.type = ENT_T::npc;
	}

	int cleanup_game(LPVOID lpParam)
	{
		fclose(static_cast <_iobuf*>(__acrt_iob_func(0)));
		fclose(static_cast <_iobuf*>(__acrt_iob_func(1)));
		fclose(static_cast <_iobuf*>(__acrt_iob_func(2)));

		FreeConsole();
		if (lpParam)
			FreeLibraryAndExitThread(static_cast <HMODULE> (lpParam),
				EXIT_SUCCESS);

		return TRUE;
	}
}

ImVec2 WorldToImVec(SDK::UnityEngine::Vector3 WorldPos)
{
	SDK::UnityEngine::Vector3 point;
	shared_data::assert_w2s(WorldPos, point);
	return ImVec2(point.x, point.y);
}
SDK::UnityEngine::Vector3 WorldToVec(SDK::UnityEngine::Vector3 WorldPos)
{
	SDK::UnityEngine::Vector3 point;
	shared_data::assert_w2s(WorldPos, point);
	return SDK::UnityEngine::Vector3(point.x, point.y);
}

void get_descendants(SDK::UnityEngine::Transform* trans, INT32 v, SDK::UnityEngine::Transform* parent)
{

	if (!trans) return;
	printf("Bone %s is number %i from parent %s\n", (char*)*(uintptr_t*)(*(uintptr_t*)(*(uintptr_t*)((uintptr_t)trans + 0x10) + 0x30) + 0x60), v, (char*)*(uintptr_t*)(*(uintptr_t*)(*(uintptr_t*)((uintptr_t)parent + 0x10) + 0x30) + 0x60));
	for (uint32_t i = 0; i < trans->get_childCount(); i++) {
		get_descendants(trans->GetChild(i), i, trans);
	}
}

SDK::UnityEngine::Vector3 tGetPosition(SDK::UnityEngine::Transform Part)//we going lua mode out here
{
	SDK::UnityEngine::Vector3 pos;
	Part.get_position_Injected(pos);
	return pos;
}

SDK::UnityEngine::Vector3 domath(SDK::UnityEngine::Vector3 vec3, UINT32 value, const char* first, const char* second)
{
	SDK::UnityEngine::Vector3 vec;
	if (first == "+" && second == "-")
	{
		vec.x = vec3.x + value;
		vec.y = vec3.y;
		vec.z = vec3.z - value;
	}
	if (first == "-" && second == "+")
	{
		vec.x = vec3.x - value;
		vec.y = vec3.y;
		vec.z = vec3.z + value;
	}
	if (first == "+" && second == "+")
	{
		vec.x = vec3.x + value;
		vec.y = vec3.y;
		vec.z = vec3.z + value;
	}
	if (first == "-" && second == "-")
	{
		vec.x = vec3.x - value;
		vec.y = vec3.y;
		vec.z = vec3.z - value;
	}
	return vec;
}
SDK::UnityEngine::Vector3 domath(SDK::UnityEngine::Vector3 vec3, UINT32 value, const char* first)
{
	SDK::UnityEngine::Vector3 vec;
	if (first == "+")
	{
		vec.x = vec3.x + value;
		vec.y = vec3.y;
		vec.z = vec3.z - value;
	}
	if (first == "-")
	{
		vec.x = vec3.x - value;
		vec.y = vec3.y;
		vec.z = vec3.z + value;
	}
	if (first == "+")
	{
		vec.x = vec3.x + value;
		vec.y = vec3.y;
		vec.z = vec3.z + value;
	}
	if (first == "-")
	{
		vec.x = vec3.x - value;
		vec.y = vec3.y;
		vec.z = vec3.z - value;
	}
	if (first == "*")
	{
		vec.x = vec3.x * value;
		vec.y = vec3.y;
		vec.z = vec3.z * value;
	}
	if (first == "/")
	{
		vec.x = vec3.x / value;
		vec.y = vec3.y;
		vec.z = vec3.z / value;
	}
	return vec;
}
SDK::UnityEngine::Vector3 domath(SDK::UnityEngine::Vector3 Top, SDK::UnityEngine::Vector3 Bottom, const char* first)
{

	SDK::UnityEngine::Vector3 Return;
	if (first == "+")
	{
		Return.x = Top.x - Bottom.x;
		Return.y = Top.y - Bottom.y;
		Return.z = Top.z - Bottom.z;
	}
	if (first == "+")
	{
		Return.x = Top.x + Bottom.x;
		Return.y = Top.y + Bottom.y;
		Return.z = Top.z + Bottom.z;
	}
	return Return;
}

void draw_skeleton(SDK::SDG::Unturned::SteamPlayer* pClient, ImColor color, float thickness = 2)
{
	if (!pClient) return;
	Player Player(pClient);
	SDK::UnityEngine::Vector3 spot;
	Player.Spot()->get_position_Injected(spot);
	SDK::UnityEngine::Vector3 skull;
	Player.Skull()->get_position_Injected(skull);
	SDK::UnityEngine::Vector3 right_shoulder;
	Player.Right_Shoulder()->get_position_Injected(right_shoulder);
	SDK::UnityEngine::Vector3 left_shoulder;
	Player.Left_Shoulder()->get_position_Injected(left_shoulder);
	SDK::UnityEngine::Vector3 right_arm;
	Player.Right_Arm()->get_position_Injected(right_arm);
	SDK::UnityEngine::Vector3 left_arm;
	Player.Left_Arm()->get_position_Injected(left_arm);
	SDK::UnityEngine::Vector3 right_hand;
	Player.Right_Hand()->get_position_Injected(right_hand);
	SDK::UnityEngine::Vector3 left_hand;
	Player.Left_Hand()->get_position_Injected(left_hand);
	SDK::UnityEngine::Vector3 spine;
	Player.Spine()->get_position_Injected(spine);
	SDK::UnityEngine::Vector3 right_hip;
	Player.Right_Hip()->get_position_Injected(right_hip);
	SDK::UnityEngine::Vector3 left_hip;
	Player.Left_Hip()->get_position_Injected(left_hip);
	SDK::UnityEngine::Vector3 right_leg;
	Player.Right_Leg()->get_position_Injected(right_leg);
	SDK::UnityEngine::Vector3 left_leg;
	Player.Left_Leg()->get_position_Injected(left_leg);
	SDK::UnityEngine::Vector3 right_foot;
	Player.Right_Foot()->get_position_Injected(right_foot);
	SDK::UnityEngine::Vector3 left_foot;
	Player.Left_Foot()->get_position_Injected(left_foot);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(spot), WorldToImVec(skull), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(skull), WorldToImVec(right_shoulder), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(skull), WorldToImVec(left_shoulder), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(right_shoulder), WorldToImVec(right_arm), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(left_shoulder), WorldToImVec(left_arm), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(right_arm), WorldToImVec(right_hand), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(left_arm), WorldToImVec(left_hand), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(spine), WorldToImVec(skull), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(spine), WorldToImVec(right_hip), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(spine), WorldToImVec(left_hip), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(right_hip), WorldToImVec(right_leg), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(left_hip), WorldToImVec(left_leg), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(right_leg), WorldToImVec(right_foot), color, thickness);
	ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(left_leg), WorldToImVec(left_foot), color, thickness);

}

float GetHeight(SDK::UnityEngine::Vector3 footpos, SDK::UnityEngine::Vector3 headpos)
{
	return headpos.y - footpos.y;
}
float GetWidth(SDK::UnityEngine::Vector3 leftpos, SDK::UnityEngine::Vector3 rightpos)
{
	return leftpos.x - rightpos.x;
}