#include "AActor.hpp"
#include "ANavigationData.hpp"
#include "EPathFollowingAction\Type.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UNavMovementComponent.hpp"
#include "UPathFollowingComponent.hpp"
UPathFollowingComponent* UPathFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.PathFollowingComponent");
    return (UPathFollowingComponent*)res;
}
EPathFollowingAction::Type UPathFollowingComponent::GetPathActionType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PathFollowingComponent.GetPathActionType"));
    struct Params_GetPathActionType {
        EPathFollowingAction::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPathActionType params{};
    ProcessEvent(func, &params);
    return (EPathFollowingAction::Type)params.ReturnValue;
}
void UPathFollowingComponent::OnNavDataRegistered(ANavigationData* NavData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered"));
    struct Params_OnNavDataRegistered {
        ANavigationData* NavData; // 0x0
    }; // Size: 0x8
    Params_OnNavDataRegistered params{};
    params.NavData = (ANavigationData*)NavData;
    ProcessEvent(func, &params);
}
void UPathFollowingComponent::OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PathFollowingComponent.OnActorBump"));
    struct Params_OnActorBump {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnActorBump params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
FVector UPathFollowingComponent::GetPathDestination() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PathFollowingComponent.GetPathDestination"));
    struct Params_GetPathDestination {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPathDestination params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
