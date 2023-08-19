#include "AActor.hpp"
#include "AFlyingStairsChain.hpp"
#include "FFlyingStairStatus.hpp"
#include "FHitResult.hpp"
#include "UCapsuleComponent.hpp"
#include "UFlyingStairComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
AFlyingStairsChain* AFlyingStairsChain::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingStairsChain");
    return (AFlyingStairsChain*)res;
}
void AFlyingStairsChain::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairsChain.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void AFlyingStairsChain::OnFlyingStairComponentDemolish(UFlyingStairComponent* FlyingStairComponent, float animationLength, float animationStartPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairsChain.OnFlyingStairComponentDemolish"));
    struct Params_OnFlyingStairComponentDemolish {
        UFlyingStairComponent* FlyingStairComponent; // 0x0
        float animationLength; // 0x8
        float animationStartPosition; // 0xc
    }; // Size: 0x10
    Params_OnFlyingStairComponentDemolish params{};
    params.FlyingStairComponent = (UFlyingStairComponent*)FlyingStairComponent;
    params.animationLength = (float)animationLength;
    params.animationStartPosition = (float)animationStartPosition;
    ProcessEvent(func, &params);
}
void AFlyingStairsChain::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairsChain.OnOverlapBegin"));
    struct Params_OnOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void AFlyingStairsChain::OnFlyingStairComponentBuild(UFlyingStairComponent* FlyingStairComponent, float animationLength, float animationStartPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairsChain.OnFlyingStairComponentBuild"));
    struct Params_OnFlyingStairComponentBuild {
        UFlyingStairComponent* FlyingStairComponent; // 0x0
        float animationLength; // 0x8
        float animationStartPosition; // 0xc
    }; // Size: 0x10
    Params_OnFlyingStairComponentBuild params{};
    params.FlyingStairComponent = (UFlyingStairComponent*)FlyingStairComponent;
    params.animationLength = (float)animationLength;
    params.animationStartPosition = (float)animationStartPosition;
    ProcessEvent(func, &params);
}
void AFlyingStairsChain::DemolishNext() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairsChain.DemolishNext"));
    struct Params_DemolishNext {
    }; // Size: 0x0
    Params_DemolishNext params{};
    ProcessEvent(func, &params);
}
void AFlyingStairsChain::BuildNext() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairsChain.BuildNext"));
    struct Params_BuildNext {
    }; // Size: 0x0
    Params_BuildNext params{};
    ProcessEvent(func, &params);
}
