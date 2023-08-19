#pragma once
#include <cstdint>
#include "FRuntimeCurveLinearColor.hpp"
#include "UPostProcessingVarColorBase.hpp"
#pragma pack(push, 1)
class UPostProcessingVarColorInlineCurve : public UPostProcessingVarColorBase {
public:
    FRuntimeCurveLinearColor Value; // 0x30
    static UPostProcessingVarColorInlineCurve* StaticClass();
}; // Size: 0x238
#pragma pack(pop)
