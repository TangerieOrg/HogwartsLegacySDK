#pragma once
#include <cstdint>
#include "FAIStimulus.hpp"
#pragma pack(push, 1)
struct FActorPerceptionUpdateInfo {
    int32_t TargetId; // 0x0
    char pad_4[0x8];
    FAIStimulus Stimulus; // 0xc
}; // Size: 0x48
#pragma pack(pop)
