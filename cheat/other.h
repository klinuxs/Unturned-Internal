#pragma once
#include "../includes.h"
#include "globals.h"


std::string ELimbToString(SDK::SDG::Unturned::ELimb limb) {
	switch (limb) {
	case SDK::SDG::Unturned::ELimb::SPINE: return "Spine";
	case SDK::SDG::Unturned::ELimb::SKULL: return "Head";
	case SDK::SDG::Unturned::ELimb::LEFT_FOOT: return "Left Foot";
	case SDK::SDG::Unturned::ELimb::LEFT_LEG: return "Left Leg";
	case SDK::SDG::Unturned::ELimb::RIGHT_FOOT: return "Right Foot";
	case SDK::SDG::Unturned::ELimb::RIGHT_LEG: return "Right Leg";
	case SDK::SDG::Unturned::ELimb::LEFT_HAND: return "Left Hand";
	case SDK::SDG::Unturned::ELimb::LEFT_ARM: return "Left Arm";
	case SDK::SDG::Unturned::ELimb::RIGHT_HAND: return "Right Hand";
	case SDK::SDG::Unturned::ELimb::LEFT_BACK: return "Left Back";
	case SDK::SDG::Unturned::ELimb::RIGHT_BACK: return "Right Back";
	case SDK::SDG::Unturned::ELimb::LEFT_FRONT: return "Left Front";
	case SDK::SDG::Unturned::ELimb::RIGHT_FRONT: return "Right Front";
	}
}

auto draw = ImGui::GetBackgroundDrawList();

float* GetGunDistance()
{
	auto currentGun = (SDK::SDG::Unturned::ItemGunAsset*)(shared_data::localplayer->_equipment()->_asset());

	if (!currentGun)
		return new float(15.5f);

	return new float(currentGun->damageFalloffMaxRange());
}

