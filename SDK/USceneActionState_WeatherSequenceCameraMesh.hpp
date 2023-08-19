#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequence.hpp"
class UObject;
class UMaterialInstanceDynamic;
class UMeshComponent;
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceCameraMesh : public USceneActionState_WeatherSequence {
public:
    UObject* Mesh; // 0x50
    UMeshComponent* MeshComponent; // 0x58
    TArray<UMaterialInstanceDynamic*> MIDs; // 0x60
    bool bInInterval; // 0x70
    bool bSpawned; // 0x71
    char pad_72[0x16];
    static USceneActionState_WeatherSequenceCameraMesh* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
