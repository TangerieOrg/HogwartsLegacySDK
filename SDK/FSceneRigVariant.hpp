#pragma once
#include <cstdint>
class UBoolProvider;
class USceneRigProvider;
#pragma pack(push, 1)
struct FSceneRigVariant {
    TArray<UBoolProvider*> Conditions; // 0x0
    bool AvoidTwiceInARow; // 0x10
    char pad_11[0x3];
    int32_t MinRepeatLimitCount; // 0x14
    int32_t MaxRepeatLimitCount; // 0x18
    float MinRepeatDelayLimitSeconds; // 0x1c
    float MaxRepeatDelayLimitSeconds; // 0x20
    float RelativeWeight; // 0x24
    USceneRigProvider* SceneRig; // 0x28
}; // Size: 0x30
#pragma pack(pop)
