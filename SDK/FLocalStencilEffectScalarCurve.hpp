#pragma once
#include <cstdint>
#include "FLocalStencilEffectMaterialParameter.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FLocalStencilEffectScalarCurve : public FLocalStencilEffectMaterialParameter {
    UCurveFloat* Curve; // 0x8
}; // Size: 0x10
#pragma pack(pop)
