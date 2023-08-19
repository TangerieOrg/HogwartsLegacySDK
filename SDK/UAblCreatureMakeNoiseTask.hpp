#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCreatureMakeNoiseTask : public UAblAbilityTask {
public:
    FName NoiseEventTag; // 0x70
    float Loudness; // 0x78
    char pad_7c[0x4];
    static UAblCreatureMakeNoiseTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
