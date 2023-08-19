#pragma once
#include <cstdint>
#include "FLocalStencilEffectMaterialParameter.hpp"
#pragma pack(push, 1)
struct FLocalStencilEffectScalar : public FLocalStencilEffectMaterialParameter {
    float Value; // 0x8
}; // Size: 0xc
#pragma pack(pop)
