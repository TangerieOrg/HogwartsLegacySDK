#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FChildSpawnData {
    AActor* ParentActor; // 0x0
    TArray<AActor*> SpawnChildren; // 0x8
}; // Size: 0x18
#pragma pack(pop)
