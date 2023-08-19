#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FFlyingStairStatus.hpp"
class UCapsuleComponent;
class UPrimitiveComponent;
struct FHitResult;
class UFlyingStairComponent;
#pragma pack(push, 1)
class AFlyingStairsChain : public AActor {
public:
    char pad_248[0x20];
    UCapsuleComponent* FlyingStairsChainArea; // 0x268
    float TimeBetweenAutomaticSequentialBuilding; // 0x270
    int32_t SpeedOfStairsFromCloud; // 0x274
    bool bBuildWholeChainWhenCharacterEntersRange; // 0x278
    char pad_279[0x7];
    TArray<FFlyingStairStatus> FlyingStairs; // 0x280
    char pad_290[0x20];
    static AFlyingStairsChain* StaticClass();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void OnFlyingStairComponentDemolish(UFlyingStairComponent* FlyingStairComponent, float animationLength, float animationStartPosition);
    void OnFlyingStairComponentBuild(UFlyingStairComponent* FlyingStairComponent, float animationLength, float animationStartPosition);
    void DemolishNext();
    void BuildNext();
}; // Size: 0x2b0
#pragma pack(pop)
