#pragma once
#include <cstdint>
#include "UPostProcessingVarScalarBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UPostProcessingVarScalarCurveAsset : public UPostProcessingVarScalarBase {
public:
    UCurveFloat* Curve; // 0x30
    static UPostProcessingVarScalarCurveAsset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
