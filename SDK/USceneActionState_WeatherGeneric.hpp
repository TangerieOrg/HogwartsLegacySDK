#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherGeneric : public USceneRigActionState {
public:
    char pad_50[0x8];
    float CachedTime; // 0x58
    float CachedDuration; // 0x5c
    bool bCachedEnabled; // 0x60
    bool bCachedInsideInterval; // 0x61
    char pad_62[0x6];
    static USceneActionState_WeatherGeneric* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
