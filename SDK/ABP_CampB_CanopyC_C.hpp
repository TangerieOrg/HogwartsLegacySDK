#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class UCameraStackVolumeComponent;
class UBoxComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_CampB_CanopyC_C : public AActor {
public:
    UStaticMeshComponent* SM_COL_CampB_CanopyC; // 0x248
    UCameraStackVolumeComponent* CameraStackVolume1; // 0x250
    UBoxComponent* Box2; // 0x258
    UStaticMeshComponent* StaticMeshComponent1; // 0x260
    UStaticMeshComponent* StaticMeshComponent0; // 0x268
    USceneComponent* SharedRoot; // 0x270
    static ABP_CampB_CanopyC_C* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
