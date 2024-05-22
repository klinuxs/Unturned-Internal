#include "../../imgui/imgui.h"
#include "../../imgui/imgui_impl_win32.h"
#include "../../imgui/imgui_impl_dx11.h"
struct ImColor2
{
	ImColor Visible;
	ImColor NotVisible;
};

struct ImColor4
{
	ImColor Visible;
	ImColor NotVisible;
	ImColor TeamVisible;
	ImColor TeamNotVisible;
};
enum ENT_T {
	player,
	npc,
};
class AimbotOptions {
public:
	bool enabled = false;
	bool draw_fov = false;
	bool players = false;
	bool zombies = false;
	float fov = 100;
	float smoothness = 1;
	const char* current_item = "Head";

	ENT_T type = ENT_T::player;
};

class ESPOptions {
public:
	bool enabled = false;
	bool draw_name = false;
	bool draw_distance = false;
	bool draw_box = false;
	bool draw_3dbox = false;
	bool draw_bones = false;
	bool draw_lines = false;
	bool draw_groups = false;
	bool draw_health = false;
	float distance = 200;

	ENT_T type = ENT_T::player;
};

class Colors {
public:
	ImColor2 box = { ImColor(255, 0, 0), ImColor(0, 255, 0) };
	ImColor2 name = { ImColor(255, 0, 0), ImColor(0, 255, 0) };
	ImColor2 distance = { ImColor(255, 0, 0), ImColor(0, 255, 0) };
	ImColor2 line = { ImColor(255, 0, 0), ImColor(0, 255, 0) };
	ImColor2 bones = { ImColor(255, 0, 0), ImColor(0, 255, 0) };
	ImColor2 fov = { ImColor(255, 0, 0), ImColor(0, 255, 0) };
	ImColor2 health = { ImColor(255, 0, 0), ImColor(0, 255, 0) };
	ImColor background = ImColor(255, 0, 0, 0);
};

class MiscOptions {
public:
	bool no_spread = false;
	float spread = 100;
	bool no_recoil = false;
	float recoil = 100;
	bool debug = true;
};

class LocalOptions {
public:
	bool adminspoof = false;
	bool alwaysday = false;
	bool fullbright = false;

};

class Settings {
public:
	ESPOptions players = ESPOptions();
	Colors colors = Colors();
	AimbotOptions aimbot = AimbotOptions();
	ESPOptions npc = ESPOptions();
	LocalOptions local = LocalOptions();


	MiscOptions misc = MiscOptions();
};
