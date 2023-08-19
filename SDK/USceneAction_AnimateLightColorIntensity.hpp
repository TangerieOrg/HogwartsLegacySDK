#pragma once
#include <cstdint>
#include "USceneAction_SpawnActorAllowAsChild.hpp"
#pragma pack(push, 1)
class USceneAction_AnimateLightColorIntensity : public USceneAction_SpawnActorAllowAsChild {
public:
    bool bRestoreLights; // 0xa0
    char pad_a1[0x7];
    static USceneAction_AnimateLightColorIntensity* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
