#pragma once
#include <cstdint>
#include "FFlockPersonalityAnimate.hpp"
#include "FFlockPersonalityLagger.hpp"
#include "FFlockPersonalitySpacer.hpp"
#include "FFlockPersonalitySpinner.hpp"
#include "FFlockPersonalitySpooker.hpp"
#include "FFlockPersonalityWanderer.hpp"
#pragma pack(push, 1)
struct FFlockPersonalities {
    FFlockPersonalityWanderer Wanderers; // 0x0
    bool bWanderers; // 0x28
    char pad_29[0x7];
    FFlockPersonalityLagger Laggers; // 0x30
    bool bLaggers; // 0x50
    char pad_51[0x7];
    FFlockPersonalitySpacer Spacers; // 0x58
    bool bSpacers; // 0x78
    char pad_79[0x7];
    FFlockPersonalitySpooker Spookers; // 0x80
    bool bSpookers; // 0xb8
    char pad_b9[0x7];
    FFlockPersonalitySpinner Spinners; // 0xc0
    bool bSpinners; // 0xf8
    char pad_f9[0x7];
    FFlockPersonalitySpinner AlternateSpinners; // 0x100
    bool bAlternateSpinners; // 0x138
    char pad_139[0x7];
    FFlockPersonalityAnimate Animates; // 0x140
    bool bAnimates; // 0x178
    char pad_179[0x7];
}; // Size: 0x180
#pragma pack(pop)
