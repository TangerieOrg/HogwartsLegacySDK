#pragma once
#include <cstdint>
#include "EMaterialSwapRulesTypeMode.hpp"
#pragma pack(push, 1)
struct FMaterialSwapActorTypeRules {
    EMaterialSwapRulesTypeMode Players; // 0x0
    EMaterialSwapRulesTypeMode Characters; // 0x1
    EMaterialSwapRulesTypeMode Pawns; // 0x2
    EMaterialSwapRulesTypeMode Moveable; // 0x3
    EMaterialSwapRulesTypeMode Stationary; // 0x4
}; // Size: 0x5
#pragma pack(pop)
