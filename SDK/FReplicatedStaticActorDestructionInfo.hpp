#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FReplicatedStaticActorDestructionInfo {
    char pad_0[0x30];
    UClass* ObjClass; // 0x30
}; // Size: 0x38
#pragma pack(pop)
