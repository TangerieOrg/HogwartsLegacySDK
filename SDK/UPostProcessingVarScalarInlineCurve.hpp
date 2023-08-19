#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UPostProcessingVarScalarBase.hpp"
#pragma pack(push, 1)
class UPostProcessingVarScalarInlineCurve : public UPostProcessingVarScalarBase {
public:
    FRuntimeFloatCurve Value; // 0x30
    static UPostProcessingVarScalarInlineCurve* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
