#pragma once
#include <cstdint>
#include "EMaterialSwapRulesTypeMode.hpp"
#pragma pack(push, 1)
struct FMaterialSwapMeshTypeRules {
    EMaterialSwapRulesTypeMode Static; // 0x0
    EMaterialSwapRulesTypeMode Skeletal; // 0x1
    EMaterialSwapRulesTypeMode Instanced; // 0x2
    EMaterialSwapRulesTypeMode Spline; // 0x3
    EMaterialSwapRulesTypeMode Moveable; // 0x4
    EMaterialSwapRulesTypeMode Stationary; // 0x5
    EMaterialSwapRulesTypeMode ReceivesDecals; // 0x6
    EMaterialSwapRulesTypeMode ReceivesWeatherDecals; // 0x7
    EMaterialSwapRulesTypeMode RenderCustomDepth; // 0x8
}; // Size: 0x9
#pragma pack(pop)
