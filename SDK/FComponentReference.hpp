#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FComponentReference {
    AActor* OtherActor; // 0x0
    FName ComponentProperty; // 0x8
    FString PathToComponent; // 0x10
    char pad_20[0x8];
}; // Size: 0x28
#pragma pack(pop)
