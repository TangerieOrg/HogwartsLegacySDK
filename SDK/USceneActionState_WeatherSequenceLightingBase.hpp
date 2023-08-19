#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequence.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceLightingBase : public USceneActionState_WeatherSequence {
public:
    float CurrentTime; // 0x50
    char pad_54[0x4];
    static USceneActionState_WeatherSequenceLightingBase* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
