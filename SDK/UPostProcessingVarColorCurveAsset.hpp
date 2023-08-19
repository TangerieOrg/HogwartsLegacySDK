#pragma once
#include <cstdint>
#include "UPostProcessingVarColorBase.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class UPostProcessingVarColorCurveAsset : public UPostProcessingVarColorBase {
public:
    UCurveLinearColor* Curve; // 0x30
    static UPostProcessingVarColorCurveAsset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
