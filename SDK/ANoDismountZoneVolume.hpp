#pragma once
#include <cstdint>
#include "AMountZoneVolumeBase.hpp"
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class ANoDismountZoneVolume : public AMountZoneVolumeBase {
public:
    static ANoDismountZoneVolume* StaticClass();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x3b8
#pragma pack(pop)
