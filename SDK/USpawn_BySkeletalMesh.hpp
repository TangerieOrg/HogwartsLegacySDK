#pragma once
#include <cstdint>
#include "UActorSpawner.hpp"
class USkeletalMesh;
class USpawnByPrimitiveOptions;
#pragma pack(push, 1)
class USpawn_BySkeletalMesh : public UActorSpawner {
public:
    USkeletalMesh* SkeletalMesh; // 0x48
    int32_t LODOverride; // 0x50
    char pad_54[0x4];
    TArray<USpawnByPrimitiveOptions*> PrimitiveOptions; // 0x58
    static USpawn_BySkeletalMesh* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
