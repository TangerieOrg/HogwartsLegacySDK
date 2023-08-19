#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_GameOptions : public USceneRigActionState {
public:
    char pad_50[0xc];
    float CachedTime; // 0x5c
    float CachedDuration; // 0x60
    bool bCachedEnabled; // 0x64
    bool bCachedInsideInterval; // 0x65
    char pad_66[0xa];
    static USceneActionState_GameOptions* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
