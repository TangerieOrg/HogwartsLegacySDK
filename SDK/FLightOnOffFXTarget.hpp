#pragma once
#include <cstdint>
class USceneComponent;
#pragma pack(push, 1)
struct FLightOnOffFXTarget {
    USceneComponent* SceneComponent; // 0x0
    bool bOnOff; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
