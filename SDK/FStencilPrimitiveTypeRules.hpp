#pragma once
#include <cstdint>
#include "EStencilRulesTypeMode.hpp"
#pragma pack(push, 1)
struct FStencilPrimitiveTypeRules {
    EStencilRulesTypeMode Static; // 0x0
    EStencilRulesTypeMode Skeletal; // 0x1
    EStencilRulesTypeMode Instanced; // 0x2
    EStencilRulesTypeMode Spline; // 0x3
    EStencilRulesTypeMode Moveable; // 0x4
    EStencilRulesTypeMode Stationary; // 0x5
    EStencilRulesTypeMode ReceivesDecals; // 0x6
    EStencilRulesTypeMode ReceivesWeatherDecals; // 0x7
    EStencilRulesTypeMode RenderCustomDepth; // 0x8
}; // Size: 0x9
#pragma pack(pop)
