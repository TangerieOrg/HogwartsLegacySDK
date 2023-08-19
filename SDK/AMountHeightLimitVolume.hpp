#pragma once
#include <cstdint>
#include "AMountZoneVolumeBase.hpp"
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class AMountHeightLimitVolume : public AMountZoneVolumeBase {
public:
    float FlyHeightOverride; // 0x3b8
    char pad_3bc[0x4];
    static AMountHeightLimitVolume* StaticClass();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x3c0
#pragma pack(pop)
