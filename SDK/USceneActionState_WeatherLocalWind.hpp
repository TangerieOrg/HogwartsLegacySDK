#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherLocalWind : public USceneRigActionState {
public:
    char pad_50[0x8];
    float CurrentBlend; // 0x58
    float Now; // 0x5c
    static USceneActionState_WeatherLocalWind* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
