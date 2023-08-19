#pragma once
#include <cstdint>
#include "AActor.hpp"
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UDebugMapVolumeComponent;
#pragma pack(push, 1)
class ADebugMapVolumeActor : public AActor {
public:
    FString VolumeId; // 0x248
    UMaterialInstanceDynamic* VolumeDynamicMaterial; // 0x258
    UMaterialInterface* VolumeMaterial; // 0x260
    UDebugMapVolumeComponent* DebugVolumeComponent; // 0x268
    static ADebugMapVolumeActor* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
