#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UAnimMetaData.hpp"
#pragma pack(push, 1)
class UAnimMetaDataQuadrupedSpine : public UAnimMetaData {
public:
    bool bEnableSpineBending; // 0x28
    char pad_29[0x7];
    FRuntimeFloatCurve SpineStartCurve; // 0x30
    FRuntimeFloatCurve SpineEndCurve; // 0xb8
    FRuntimeFloatCurve TurnRateStartCurve; // 0x140
    FRuntimeFloatCurve TurnRateEndCurve; // 0x1c8
    static UAnimMetaDataQuadrupedSpine* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
