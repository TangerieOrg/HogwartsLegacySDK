#include "AActor.hpp"
#include "AFishMoverBase.hpp"
#include "UAnimationAsset.hpp"
#include "UFunction.hpp"
#include "USkeletalMesh.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USplineComponent.hpp"
void AFishMoverBase::InitFish(int32_t numberOfFish, USkeletalMesh* Mesh, UAnimationAsset* Anim, float ScaleMin, float ScaleMax, float spacing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FishMoverBase.InitFish"));
    struct Params_InitFish {
        int32_t numberOfFish; // 0x0
        char pad_4[0x4];
        USkeletalMesh* Mesh; // 0x8
        UAnimationAsset* Anim; // 0x10
        float ScaleMin; // 0x18
        float ScaleMax; // 0x1c
        float spacing; // 0x20
    }; // Size: 0x24
    Params_InitFish params{};
    params.numberOfFish = (int32_t)numberOfFish;
    params.Mesh = (USkeletalMesh*)Mesh;
    params.Anim = (UAnimationAsset*)Anim;
    params.ScaleMin = (float)ScaleMin;
    params.ScaleMax = (float)ScaleMax;
    params.spacing = (float)spacing;
    ProcessEvent(func, &params);
}
AFishMoverBase* AFishMoverBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FishMoverBase");
    return (AFishMoverBase*)res;
}
void AFishMoverBase::AddFishSpline(USplineComponent* Spline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FishMoverBase.AddFishSpline"));
    struct Params_AddFishSpline {
        USplineComponent* Spline; // 0x0
    }; // Size: 0x8
    Params_AddFishSpline params{};
    params.Spline = (USplineComponent*)Spline;
    ProcessEvent(func, &params);
}
void AFishMoverBase::MoveFish(float timelineTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FishMoverBase.MoveFish"));
    struct Params_MoveFish {
        float timelineTime; // 0x0
    }; // Size: 0x4
    Params_MoveFish params{};
    params.timelineTime = (float)timelineTime;
    ProcessEvent(func, &params);
}
