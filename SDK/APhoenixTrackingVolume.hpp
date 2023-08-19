#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETrackingVolumeType.hpp"
class UShapeComponent;
#pragma pack(push, 1)
class APhoenixTrackingVolume : public AActor {
public:
    UShapeComponent* CollisionComponent; // 0x248
    FString VolumeData; // 0x250
    char pad_260[0x50];
    ETrackingVolumeType VolumeType; // 0x2b0
    char pad_2b1[0x3];
    float VolumeSearchRadius; // 0x2b4
    static APhoenixTrackingVolume* StaticClass();
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
}; // Size: 0x2b8
#pragma pack(pop)
