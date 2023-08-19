#pragma once
#include <cstdint>
#include "FEmissiveAdaptationFinalState.hpp"
#pragma pack(push, 1)
struct FLightAdaptationTracker {
    TArray<void*> Components; // 0x0
    FEmissiveAdaptationFinalState LastState; // 0x10
}; // Size: 0x98
#pragma pack(pop)
