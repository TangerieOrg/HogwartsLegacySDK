#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FLocalStencilEffectMaterialParameter.hpp"
#pragma pack(push, 1)
struct FLocalStencilEffectColor : public FLocalStencilEffectMaterialParameter {
    FLinearColor Color; // 0x8
}; // Size: 0x18
#pragma pack(pop)
