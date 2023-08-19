#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UClass;
#pragma pack(push, 1)
class UMultiFX2_SpawnActor : public UMultiFX2_Filtered {
public:
    UClass* SpawnActorClass; // 0x68
    char pad_70[0x28];
    bool bAttached; // 0x98
    char pad_99[0x3];
    float LifeSpan; // 0x9c
    bool bDestroyActorOnDeactivate; // 0xa0
    char pad_a1[0x3];
    FName HermesMesageOnDeactivate; // 0xa4
    char pad_ac[0x4];
    static UMultiFX2_SpawnActor* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
