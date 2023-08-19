#pragma once
#include <cstdint>
class UObject;
class ULevel;
#pragma pack(push, 1)
struct FRollbackNetStartupActorInfo {
    char pad_0[0x8];
    UObject* Archetype; // 0x8
    char pad_10[0x28];
    ULevel* Level; // 0x38
    char pad_40[0x60];
    TArray<UObject*> ObjReferences; // 0xa0
}; // Size: 0xb0
#pragma pack(pop)
