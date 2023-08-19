#pragma once
#include <cstdint>
#include "ENoiseSize.hpp"
#include "UObject.hpp"
class UGeometryCollection;
class UStaticMesh;
class UPhysicalMaterial;
class UClass;
class UMultiFX2_Base;
class UAkAudioEvent;
class UReparoData;
#pragma pack(push, 1)
class URepairInfo : public UObject {
public:
    UGeometryCollection* DestructibleGeometryCollection; // 0x28
    UStaticMesh* BaseMesh; // 0x30
    char pad_38[0x8];
    UPhysicalMaterial* ChunkPhysicalMaterial; // 0x40
    TArray<UMultiFX2_Base*> DeathFX2; // 0x48
    TArray<UMultiFX2_Base*> DamagableInPiecesFX2; // 0x58
    ENoiseSize DeathNoiseSize; // 0x68
    char pad_69[0x7];
    UObject* ChunkTrailVfx; // 0x70
    TArray<UMultiFX2_Base*> ChunkTrailFX2; // 0x78
    UObject* ChunkFadeVfx; // 0x88
    UObject* ChunkImpactVfx; // 0x90
    UAkAudioEvent* RepairSfx; // 0x98
    UReparoData* ReparoDataPtr; // 0xa0
    TArray<UReparoData*> ReparoDataArray; // 0xa8
    UClass* DestroyObjectFieldSystemClass; // 0xb8
    int32_t MaxClusterLevel; // 0xc0
    bool bSimpleDestroy; // 0xc4
    char pad_c5[0x18b];
    static URepairInfo* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
