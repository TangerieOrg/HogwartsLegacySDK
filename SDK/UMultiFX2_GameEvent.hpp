#pragma once
#include <cstdint>
#include "EGameEvent_Intensity.hpp"
#include "FGameplayTagContainer.hpp"
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_GameEvent : public UMultiFX2_Filtered {
public:
    FGameplayTagContainer TagContainer; // 0x68
    EGameEvent_Intensity Intensity; // 0x88
    char pad_89[0x3];
    float Duration; // 0x8c
    float Range; // 0x90
    float Falloff; // 0x94
    static UMultiFX2_GameEvent* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
