#include "cheat/globals.h"
#include "cheat/other.h"
#include <string>
#include <iostream>
// if anyone reads this, my source was leaked or i posted it, enjoy my shit code and schizophrenic comments.
// lol

HHOOK hMouseHook;
bool init = false;
LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(globals::oWndProc, hWnd, uMsg, wParam, lParam);
}



HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{

	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&globals::pDevice)))
		{
			globals::pDevice->GetImmediateContext(&globals::pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			globals::window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			globals::pDevice->CreateRenderTargetView(pBackBuffer, NULL, &globals::mainRenderTargetView);
			pBackBuffer->Release();
			globals::oWndProc = (WNDPROC)SetWindowLongPtr(globals::window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			renderer::InitImGui();
			init = true;
		}
		else
			return globals::oPresent(pSwapChain, SyncInterval, Flags);
	}
	static std::vector<Snowflake::Snowflake> snowflakes;
	static bool snowflakesCreated = false;
	if (!snowflakesCreated)
	{
		Snowflake::CreateSnowFlakes(snowflakes, 500, 1.0f, 7.0f, 0, 0, shared_data::resolution.get_width(), shared_data::resolution.get_height(), Snowflake::vec3(0.0f, 0.1f), IM_COL32(235, 235, 235, 195));
		snowflakesCreated = true;
	}
	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	if (globals::menu_vis)
	{

		ImGui::SetNextWindowSize({ 650.f, 400.f }, ImGuiCond_Once);
		ImGui::Begin("Sentinal Ver: 1.0", nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);
		{

			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(0, 0), ImVec2(shared_data::resolution.get_width(), shared_data::resolution.get_height()), ImColor(0, 0, 0, 255 * 0.75));
			LPPOINT Curso2r = new POINT();
			GetCursorPos(Curso2r);
			Snowflake::Update(snowflakes, Snowflake::vec3(Curso2r->x, Curso2r->y), Snowflake::vec3(0.0f, 0.0f));
			ImGui::BeginTabBar("##Tabz", ImGuiTabBarFlags_None);
			{
				if (ImGui::BeginTabItem("Aimbot"))
				{

					ImGui::Checkbox("Aimbot", &globals::settings.aimbot.enabled);
					ImGui::Checkbox("Aimbot FOV", &globals::settings.aimbot.draw_fov);
					if (globals::settings.aimbot.draw_fov) {
						ImGui::SliderFloat("Aimbot FOV", &globals::settings.aimbot.fov, 0, 360);
					}
					if (ImGui::BeginCombo("Bones", globals::settings.aimbot.current_item)) {
						for (int i = (int)SDK::SDG::Unturned::ELimb::LEFT_FOOT; i <= (int)SDK::SDG::Unturned::ELimb::SKULL; i++) {
							SDK::SDG::Unturned::ELimb bone = SDK::SDG::Unturned::ELimb(i);

							std::string name = ELimbToString(bone);
							bool is_selected = (globals::settings.aimbot.current_item == name);
							if (ImGui::Selectable(name.c_str(), is_selected)) {
								globals::settings.aimbot.current_item = name.c_str();
							}

							if (is_selected) {
								ImGui::SetItemDefaultFocus();
							}
						}
						ImGui::EndCombo();
					}
					ImGui::EndTabItem();

				}
				if (ImGui::BeginTabItem("Visuals"))
				{

					ImGui::Checkbox("Enabled", &globals::settings.players.enabled);
					ImGui::Checkbox("Names", &globals::settings.players.draw_name);
					ImGui::Checkbox("Box", &globals::settings.players.draw_box);
					ImGui::Checkbox("Bones", &globals::settings.players.draw_bones);
					ImGui::Checkbox("3D Box", &globals::settings.players.draw_3dbox);
					ImGui::Checkbox("Lines", &globals::settings.players.draw_lines);
					ImGui::Checkbox("Health", &globals::settings.players.draw_health);
					ImGui::EndTabItem();
				}
				if (ImGui::BeginTabItem("Weapons"))
				{
					ImGui::Checkbox("No Spread", &globals::settings.misc.no_spread);
					if (globals::settings.misc.no_spread)
					{
						ImGui::SliderFloat("Spread", &globals::settings.misc.spread, 0, 100);
					}
					ImGui::Checkbox("No Recoil", &globals::settings.misc.no_recoil);
					if (globals::settings.misc.no_recoil)
					{
						ImGui::SliderFloat("Recoil", &globals::settings.misc.recoil, 0, 100);
					}
					ImGui::EndTabItem();
				}
				if (ImGui::BeginTabItem("Local"))
				{
					ImGui::Checkbox("Admin Spoof", &globals::settings.local.adminspoof);

					ImGui::EndTabItem();
				}
				if (ImGui::BeginTabItem("Colors")) {
					ImGui::SetCursorPosX(-350);
					ImGui::ColorEdit3("Box Visible", (float*)&globals::settings.colors.box.Visible);
					ImGui::ColorEdit3("Box NonVisible", (float*)&globals::settings.colors.box.NotVisible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("Name Visible", (float*)&globals::settings.colors.name.Visible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("Name NonVisible", (float*)&globals::settings.colors.name.NotVisible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("Distance Visible", (float*)&globals::settings.colors.distance.Visible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("Distance NonVisible", (float*)&globals::settings.colors.distance.NotVisible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("Line Visible", (float*)&globals::settings.colors.line.Visible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("Line NonVisible", (float*)&globals::settings.colors.line.NotVisible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("Bones Visible", (float*)&globals::settings.colors.bones.Visible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("Bones NonVisible", (float*)&globals::settings.colors.bones.NotVisible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("FOV Visible", (float*)&globals::settings.colors.fov.Visible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					ImGui::ColorEdit3("FOV NonVisible", (float*)&globals::settings.colors.fov.NotVisible, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_NoSidePreview);
					//ImGui::ColorEdit4("Background", (float*)&globals::settings.colors.background);

					ImGui::EndTabItem();
				}

			}
		}
		ImGui::End();
	}
	else { ImGui::GetIO().WantCaptureMouse = false; }
	ImGui::SetNextWindowSize(ImVec2(shared_data::resolution.get_width(), shared_data::resolution.get_height()));
	ImGui::Begin("Overlay", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoBackground);
	shared_data::main_camera = SDK::UnityEngine::Camera::get_main();
	if (globals::menu_vis)
	{
		LPPOINT cursor = new POINT();
		ImVec2 curpos;
		GetCursorPos(cursor);
		ImVec4 Curcolor = ImCandy::RainbowP();
		ImColor teste;
		teste.Value.x = Curcolor.x;
		teste.Value.y = Curcolor.y;
		teste.Value.z = Curcolor.z;
		teste.Value.w = Curcolor.w;
		ImGui::GetForegroundDrawList()->AddLine(ImVec2(cursor->x - 10, cursor->y), ImVec2(cursor->x + 10, cursor->y), teste);
		ImGui::GetForegroundDrawList()->AddLine(ImVec2(cursor->x, cursor->y - 10), ImVec2(cursor->x, cursor->y + 10), teste);
	}
	if (globals::settings.aimbot.enabled)
	{
		if (globals::settings.aimbot.draw_fov)
		{
			ImGui::GetBackgroundDrawList()->AddCircle(
				ImVec2(shared_data::resolution.get_width() / 2, shared_data::resolution.get_height() / 2),
				globals::settings.aimbot.fov,
				ImColor(255, 255, 255, 255),
				64
			);
		}
		SDK::UnityEngine::Vector3 local_pos;
		auto clients = (List<SDK::SDG::Unturned::SteamPlayer*>*)shared_data::entity_loop[ENT_T::player];
		if (clients) {
			for (uint32_t i = 0; i < clients->Count(); i++)
			{
				auto lptransform = ((SDK::UnityEngine::Component*)shared_data::localplayer)->get_transform();
				if (lptransform)
				{
					auto player = clients->Get(i)->_player();
					auto playerid = (SDK::SDG::Unturned::SteamPlayerID*)player;
					auto playerlook = (SDK::SDG::Unturned::PlayerLook*)(player);
					auto playerlife = (SDK::SDG::Unturned::PlayerLife*)(player);
					auto playermovement = (SDK::SDG::Unturned::PlayerMovement*)(player);
					auto height = playerlook->characterHeight();
					auto transform = ((SDK::UnityEngine::Component*)player)->get_transform();
				}
			}
		}
	}
	if (globals::settings.players.enabled)
	{
		SDK::UnityEngine::Vector3 local_pos;
		SDK::UnityEngine::Vector3 local_w2s;
		auto clients = (List<SDK::SDG::Unturned::SteamPlayer*>*)shared_data::entity_loop[ENT_T::player];
		if (clients) {
			for (uint32_t i = 0; i < clients->Count(); i++)
			{
				auto lptransform = ((SDK::UnityEngine::Component*)shared_data::localplayer)->get_transform();
				if (lptransform)
				{
					lptransform->get_position_Injected(local_pos);
					shared_data::assert_w2s(local_pos, local_w2s);

					auto player = clients->Get(i)->_player();
					auto pClients = clients->Get(i);
					Player Player(pClients);
					auto model = Player.Model();
					SDK::UnityEngine::Vector3 PlayerBottom = WorldToVec(Player.Position());
					SDK::UnityEngine::Vector3 PlayerTop = WorldToVec(Player.SpotPosition());
					float Height = GetHeight(Player.Position(), Player.SpotPosition());
					float Width = GetWidth(Player.LeftArmPosition(), Player.RightArmPosition());

					if (globals::settings.players.draw_name)
					{
						ImGui::GetBackgroundDrawList()->AddText(ImVec2(PlayerTop.x, PlayerTop.y), ImColor(255, 255, 255), (char*)*(uintptr_t*)(*(uintptr_t*)(*(uintptr_t*)((uintptr_t)model + 0x10) + 0x30) + 0x60));
					}
					if (globals::settings.players.draw_box)
					{
						//ImGui::GetBackgroundDrawList()->AddRect(ImVec2(PlayerBottom.x - Width.x / 2 + 50, PlayerBottom.y), ImVec2(PlayerBottom.x - Width.x / 2 + Width.x - 50, PlayerTop.y), ImColor(255, 255, 255));
					}
					if (globals::settings.players.draw_3dbox)
					{
						SDK::UnityEngine::Vector3 wpos1 = PlayerBottom;
						SDK::UnityEngine::Vector3 hpos1 = PlayerTop;

						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(wpos1, 1, "-", "-")), WorldToImVec(domath(wpos1, 1, "+", "-")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(wpos1, 1, "+", "+")), WorldToImVec(domath(wpos1, 1, "-", "+")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(wpos1, 1, "+", "+")), WorldToImVec(domath(wpos1, 1, "+", "-")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(wpos1, 1, "-", "-")), WorldToImVec(domath(wpos1, 1, "-", "+")), ImColor(255, 255, 255));

						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(hpos1, 1, "-", "-")), WorldToImVec(domath(hpos1, 1, "+", "-")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(hpos1, 1, "+", "+")), WorldToImVec(domath(hpos1, 1, "-", "+")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(hpos1, 1, "+", "+")), WorldToImVec(domath(hpos1, 1, "+", "-")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(hpos1, 1, "-", "-")), WorldToImVec(domath(hpos1, 1, "-", "+")), ImColor(255, 255, 255));

						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(hpos1, 1, "-", "-")), WorldToImVec(domath(wpos1, 1, "-", "-")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(hpos1, 1, "+", "+")), WorldToImVec(domath(wpos1, 1, "+", "+")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(hpos1, 1, "+", "-")), WorldToImVec(domath(wpos1, 1, "+", "-")), ImColor(255, 255, 255));
						ImGui::GetBackgroundDrawList()->AddLine(WorldToImVec(domath(hpos1, 1, "-", "+")), WorldToImVec(domath(wpos1, 1, "-", "+")), ImColor(255, 255, 255));


					}
					if (globals::settings.players.draw_bones)
					{
						if (player && model)
						{
							draw_skeleton(pClients, ImColor(255, 255, 255));
						}
					}
					if (globals::settings.players.draw_lines)
					{
						if (player != shared_data::localplayer)
						{
							ImGui::GetBackgroundDrawList()->AddLine(ImVec2(local_w2s.x, local_w2s.y), ImVec2(PlayerBottom.x, PlayerBottom.y), ImColor(255, 255, 255));
						}
					}
					if (globals::settings.players.draw_groups)
					{
						// if group then draw line to eachother or boxes or something idek
					}
					if (globals::settings.players.draw_health)
					{

					}

				}
			}

			//}
		}
	}
	if (GetAsyncKeyState(VK_INSERT) & 1)
	{
		globals::menu_vis = !globals::menu_vis;
	}
	ImGui::End();

	ImGui::Render();

	globals::pContext->OMSetRenderTargets(1, &globals::mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return globals::oPresent(pSwapChain, SyncInterval, Flags);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&globals::oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);
	return TRUE;
}


DWORD WINAPI SetupThread(LPVOID lpParam)
{
	AllocConsole();
	freopen_s(reinterpret_cast<_iobuf**>(__acrt_iob_func(0)), "conin$", "r", static_cast<_iobuf*>(__acrt_iob_func(0)));
	freopen_s(reinterpret_cast<_iobuf**>(__acrt_iob_func(1)), "conout$", "w", static_cast<_iobuf*>(__acrt_iob_func(1)));
	freopen_s(reinterpret_cast<_iobuf**>(__acrt_iob_func(2)), "conout$", "w", static_cast<_iobuf*>(__acrt_iob_func(2)));

	if (!Runtime::Initialize()) {
		LOG("[%d] Error", 14);
		return TRUE;
	}

	renderer::setup_font();
	cleanup::setup_esp(globals::settings);

	cleanup::setup_resolution();
	while (!GetAsyncKeyState(VK_END))
	{
		SDK::SDG::Unturned::Provider::APP_AUTHOR_Set(String::New("Sunni"));
		SDK::SDG::Unturned::Provider::APP_NAME_Set(String::New("Sentinel"));
		SDK::SDG::Unturned::Provider::APP_VERSION_Set(String::New("V1.0.0"));
		shared_data::ready = false;

		if (!SDK::SDG::Unturned::Provider::_isConnected()) {
			shared_data::entity_loop.clear();
			shared_data::localplayer = NULL;
			shared_data::main_camera = NULL;
			Sleep(100);
			continue;
		}

		if (!shared_data::localplayer) {
			shared_data::localplayer = SDK::SDG::Unturned::Player::_player();
			continue;
		}

		if (!shared_data::main_camera) {
			shared_data::main_camera = SDK::UnityEngine::Camera::get_main();
			continue;
		}

		shared_data::ready = true;

		shared_data::entity_loop.clear();
		shared_data::ent_insert(ENT_T::player, (uintptr_t)SDK::SDG::Unturned::Provider::_clients());
		auto plr = (SDK::SDG::Unturned::SteamPlayer*)shared_data::localplayer->_player;
		if (&globals::settings.local.adminspoof)
		{
			plr->set_isAdmin(true);
		}
		else { plr->set_isAdmin(false); }

		auto gun = (SDK::SDG::Unturned::ItemGunAsset*)(shared_data::localplayer->_equipment()->_asset());
		auto gunasset = (SDK::SDG::Unturned::ItemAsset*)(shared_data::localplayer->_equipment()->_asset());
		if (gunasset)
		{
			String* gunname = gunasset->_itemName();
			std::string gunNameStr = gunname->Get();
			if (!shared_data::gunValuesMap.contains(gunNameStr) && gun)
			{
				shared_data::insertGunValues(gunNameStr, gun->baseSpreadAngleRadians(), gun->recoilMax_x(), gun->recoilMax_y(), gun->recoilMin_x(), gun->recoilMin_y());
			}

			GunValues gunValues = shared_data::gunValuesMap[gunNameStr];



			if (gunValues.bsar)
			{
				if (globals::settings.misc.no_recoil && gun)
				{
					gun->recoilMax_x_Set(gunValues.rmaxx * globals::settings.misc.recoil / 100);
					gun->recoilMin_x_Set(gunValues.rminx * globals::settings.misc.recoil / 100);
					gun->recoilMax_y_Set(gunValues.rmaxy * globals::settings.misc.recoil / 100);
					gun->recoilMin_y_Set(gunValues.rminy * globals::settings.misc.recoil / 100);
				}
				if (!globals::settings.misc.no_recoil && gunValues.rmaxx != gun->recoilMax_x() && gun)
				{
					gun->recoilMax_x_Set(gunValues.rmaxx);
					gun->recoilMin_x_Set(gunValues.rminx);
					gun->recoilMax_y_Set(gunValues.rmaxy);
					gun->recoilMin_y_Set(gunValues.rminy);

				}
				if (!globals::settings.misc.no_spread && gunValues.bsar != gun->baseSpreadAngleRadians() && gun)
				{
					gun->set_baseSpreadAngleRadians(gunValues.bsar);

				}
				if (globals::settings.misc.no_spread && gun)
				{
					gun->set_baseSpreadAngleRadians(gunValues.bsar * globals::settings.misc.spread / 100);

				}
			}
		}
		Sleep(1);
	}
	//mrwx();

	return cleanup::cleanup_game(lpParam);
}



#include <iostream>      //For I/O Functions
#include <windows.h>   //For Beep & Sleep functions
#include<stdlib.h>  //For System Pause
using namespace std;

BOOL APIENTRY DllMain(HMODULE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hinstDLL);
		CreateThread(nullptr, 0, MainThread, hinstDLL, 0, nullptr);
		const HANDLE hThread = CreateThread(nullptr, NULL, SetupThread, hinstDLL, NULL, nullptr);
		if (hThread)
			CloseHandle(hThread);
		kiero::shutdown();
	}

	return TRUE;
}


/*
credits to bidenator for helping with the code (literally a huge help)
made by sunni - klinuxs on github - kuminad on discord - iluvfemboys.xyz
							 <3

*/
