#include "AActor.hpp"
#include "EBehaviorResult\Type.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UIcarus3DMovementComponent.hpp"
#include "UMercuna3DMovementComponent.hpp"
UIcarus3DMovementComponent* UIcarus3DMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/IcarusRuntime.Icarus3DMovementComponent");
    return (UIcarus3DMovementComponent*)res;
}
void UIcarus3DMovementComponent::IcarusBehaviorComplete__DelegateSignature(EBehaviorResult::Type Result) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/IcarusRuntime.Icarus3DMovementComponent.IcarusBehaviorComplete__DelegateSignature"));
    struct Params_IcarusBehaviorComplete__DelegateSignature {
        EBehaviorResult::Type Result; // 0x0
    }; // Size: 0x1
    Params_IcarusBehaviorComplete__DelegateSignature params{};
    params.Result = (EBehaviorResult::Type)Result;
    ProcessEvent(func, &params);
}
void UIcarus3DMovementComponent::DisableFlying(bool bSwitchToGroundNavigation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.DisableFlying"));
    struct Params_DisableFlying {
        bool bSwitchToGroundNavigation; // 0x0
    }; // Size: 0x1
    Params_DisableFlying params{};
    params.bSwitchToGroundNavigation = (bool)bSwitchToGroundNavigation;
    ProcessEvent(func, &params);
}
void UIcarus3DMovementComponent::BehaviorStop(EBehaviorResult::Type Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.BehaviorStop"));
    struct Params_BehaviorStop {
        EBehaviorResult::Type Result; // 0x0
    }; // Size: 0x1
    Params_BehaviorStop params{};
    params.Result = (EBehaviorResult::Type)Result;
    ProcessEvent(func, &params);
}
float UIcarus3DMovementComponent::GetTurningCircleRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.GetTurningCircleRadius"));
    struct Params_GetTurningCircleRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTurningCircleRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UIcarus3DMovementComponent::BehaviorTakeOffStart(UClass* TakeOffAbility, bool bTeleportIfNoTakeOffAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.BehaviorTakeOffStart"));
    struct Params_BehaviorTakeOffStart {
        UClass* TakeOffAbility; // 0x0
        bool bTeleportIfNoTakeOffAbility; // 0x8
    }; // Size: 0x9
    Params_BehaviorTakeOffStart params{};
    params.TakeOffAbility = (UClass*)TakeOffAbility;
    params.bTeleportIfNoTakeOffAbility = (bool)bTeleportIfNoTakeOffAbility;
    ProcessEvent(func, &params);
}
void UIcarus3DMovementComponent::BehaviorLandingLocationStart(FVector LocationToLandAt, float Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.BehaviorLandingLocationStart"));
    struct Params_BehaviorLandingLocationStart {
        FVector LocationToLandAt; // 0x0
        float Height; // 0xc
    }; // Size: 0x10
    Params_BehaviorLandingLocationStart params{};
    params.LocationToLandAt = (FVector)LocationToLandAt;
    params.Height = (float)Height;
    ProcessEvent(func, &params);
}
void UIcarus3DMovementComponent::EnableFlying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.EnableFlying"));
    struct Params_EnableFlying {
    }; // Size: 0x0
    Params_EnableFlying params{};
    ProcessEvent(func, &params);
}
void UIcarus3DMovementComponent::BehaviorLandingActorStart(AActor* ActorToLandAt, float Height, float ActorUpdateDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.BehaviorLandingActorStart"));
    struct Params_BehaviorLandingActorStart {
        AActor* ActorToLandAt; // 0x0
        float Height; // 0x8
        float ActorUpdateDistance; // 0xc
    }; // Size: 0x10
    Params_BehaviorLandingActorStart params{};
    params.ActorToLandAt = (AActor*)ActorToLandAt;
    params.Height = (float)Height;
    params.ActorUpdateDistance = (float)ActorUpdateDistance;
    ProcessEvent(func, &params);
}
void UIcarus3DMovementComponent::BehaviorCircleLocationStart(FVector CircleCenterLocation, float Radius, float Height, bool bClockwise, bool bLookAtCirclingLocation, float LookAtMaxPitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.BehaviorCircleLocationStart"));
    struct Params_BehaviorCircleLocationStart {
        FVector CircleCenterLocation; // 0x0
        float Radius; // 0xc
        float Height; // 0x10
        bool bClockwise; // 0x14
        bool bLookAtCirclingLocation; // 0x15
        char pad_16[0x2];
        float LookAtMaxPitch; // 0x18
    }; // Size: 0x1c
    Params_BehaviorCircleLocationStart params{};
    params.CircleCenterLocation = (FVector)CircleCenterLocation;
    params.Radius = (float)Radius;
    params.Height = (float)Height;
    params.bClockwise = (bool)bClockwise;
    params.bLookAtCirclingLocation = (bool)bLookAtCirclingLocation;
    params.LookAtMaxPitch = (float)LookAtMaxPitch;
    ProcessEvent(func, &params);
}
void UIcarus3DMovementComponent::BehaviorCircleActorStart(AActor* CircleCenterActor, float Radius, float Height, bool bClockwise, bool bLookAtCirclingActor, float LookAtMaxPitch, float ActorUpdateDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/IcarusRuntime.Icarus3DMovementComponent.BehaviorCircleActorStart"));
    struct Params_BehaviorCircleActorStart {
        AActor* CircleCenterActor; // 0x0
        float Radius; // 0x8
        float Height; // 0xc
        bool bClockwise; // 0x10
        bool bLookAtCirclingActor; // 0x11
        char pad_12[0x2];
        float LookAtMaxPitch; // 0x14
        float ActorUpdateDistance; // 0x18
    }; // Size: 0x1c
    Params_BehaviorCircleActorStart params{};
    params.CircleCenterActor = (AActor*)CircleCenterActor;
    params.Radius = (float)Radius;
    params.Height = (float)Height;
    params.bClockwise = (bool)bClockwise;
    params.bLookAtCirclingActor = (bool)bLookAtCirclingActor;
    params.LookAtMaxPitch = (float)LookAtMaxPitch;
    params.ActorUpdateDistance = (float)ActorUpdateDistance;
    ProcessEvent(func, &params);
}
