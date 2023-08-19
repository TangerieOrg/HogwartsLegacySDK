#include "AActor.hpp"
#include "AFlockingActor.hpp"
#include "AWEFollowButterflies.hpp"
#include "AWorldEventActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "UBillboardComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USlaveToSplineComponent.hpp"
#include "USphereComponent.hpp"
#include "USplineComponent.hpp"
AWEFollowButterflies* AWEFollowButterflies::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WEFollowButterflies");
    return (AWEFollowButterflies*)res;
}
void AWEFollowButterflies::StartMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WEFollowButterflies.StartMovement"));
    struct Params_StartMovement {
    }; // Size: 0x0
    Params_StartMovement params{};
    ProcessEvent(func, &params);
}
void AWEFollowButterflies::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WEFollowButterflies.OnOverlapBegin"));
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
void AWEFollowButterflies::HideButterflies(AFlockingActor* ButterflyFlock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WEFollowButterflies.HideButterflies"));
    struct Params_HideButterflies {
        AFlockingActor* ButterflyFlock; // 0x0
    }; // Size: 0x8
    Params_HideButterflies params{};
    params.ButterflyFlock = (AFlockingActor*)ButterflyFlock;
    ProcessEvent(func, &params);
}
void AWEFollowButterflies::BindToChestOpenedEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WEFollowButterflies.BindToChestOpenedEvent"));
    struct Params_BindToChestOpenedEvent {
    }; // Size: 0x0
    Params_BindToChestOpenedEvent params{};
    ProcessEvent(func, &params);
}
