#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FEffectInstance {
    AActor* Object; // 0x0
    AActor* Owner; // 0x8
    char pad_10[0x8];
    int32_t EffectCount; // 0x18
    FName Name; // 0x1c
    bool bCharacter; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
