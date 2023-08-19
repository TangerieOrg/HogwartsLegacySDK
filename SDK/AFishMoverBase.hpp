#pragma once
#include <cstdint>
#include "AActor.hpp"
class USplineComponent;
class USkeletalMeshComponent;
class USkeletalMesh;
class UAnimationAsset;
#pragma pack(push, 1)
class AFishMoverBase : public AActor {
public:
    TArray<float> FishOffset; // 0x248
    TArray<USplineComponent*> Splines; // 0x258
    TArray<USkeletalMeshComponent*> FishComponents; // 0x268
    static AFishMoverBase* StaticClass();
    void MoveFish(float timelineTime);
    void InitFish(int32_t numberOfFish, USkeletalMesh* Mesh, UAnimationAsset* Anim, float ScaleMin, float ScaleMax, float spacing);
    void AddFishSpline(USplineComponent* Spline);
}; // Size: 0x278
#pragma pack(pop)
