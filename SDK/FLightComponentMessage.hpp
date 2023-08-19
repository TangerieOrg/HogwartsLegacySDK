#pragma once
#include <cstdint>
class USceneComponent;
#pragma pack(push, 1)
struct FLightComponentMessage {
    USceneComponent* Component; // 0x0
    FName Name; // 0x8
    bool bIsOn; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
