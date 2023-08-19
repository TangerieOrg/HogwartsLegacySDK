#pragma once
#include <cstdint>
#include "AActor.hpp"
class UBoxComponent;
class AWaterVolume;
class UPrimitiveComponent;
class ARiverVolume;
class ADungeonWaterVolume;
struct FHitResult;
#pragma pack(push, 1)
class AWaterIgnoreVolume : public AActor {
public:
    UBoxComponent* IgnoreOverlap; // 0x248
    TArray<AActor*> WaterIgnoreActors; // 0x250
    TArray<AActor*> OverlapIgnores; // 0x260
    TArray<AWaterIgnoreVolume*> OtherIgnoreVolumes; // 0x270
    TArray<AWaterVolume*> OverlappingWaterVolumes; // 0x280
    TArray<ARiverVolume*> OverlappingRiverVolumes; // 0x290
    TArray<ADungeonWaterVolume*> OverlappingDungeonWaterVolumes; // 0x2a0
    char pad_2b0[0x8];
    static AWaterIgnoreVolume* StaticClass();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x2b8
#pragma pack(pop)
