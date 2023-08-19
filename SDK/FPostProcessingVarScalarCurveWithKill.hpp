#pragma once
#include <cstdint>
#include "FPostProcessingVarScalarCurve.hpp"
#pragma pack(push, 1)
struct FPostProcessingVarScalarCurveWithKill : public FPostProcessingVarScalarCurve {
    bool bKillWhenDone; // 0x98
    char pad_99[0x7];
}; // Size: 0xa0
#pragma pack(pop)
