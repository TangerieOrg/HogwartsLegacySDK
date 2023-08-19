#pragma once
#include <cstdint>
#include "FPostProcessingVarColorCurve.hpp"
#pragma pack(push, 1)
struct FPostProcessingVarColorCurveWithKill : public FPostProcessingVarColorCurve {
    bool bKillWhenDone; // 0x218
    char pad_219[0x7];
}; // Size: 0x220
#pragma pack(pop)
