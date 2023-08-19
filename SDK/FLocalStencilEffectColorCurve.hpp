#pragma once
#include <cstdint>
#include "FLocalStencilEffectMaterialParameter.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
struct FLocalStencilEffectColorCurve : public FLocalStencilEffectMaterialParameter {
    UCurveLinearColor* Curve; // 0x8
}; // Size: 0x10
#pragma pack(pop)
