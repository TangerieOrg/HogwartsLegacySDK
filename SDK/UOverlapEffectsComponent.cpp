#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FOverlapEffectsVelocityTracker.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UOverlapEffectsComponent.hpp"
#include "UOverlapEffectsDataAsset.hpp"
#include "UOverlapEffectsHandler.hpp"
UOverlapEffectsComponent* UOverlapEffectsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsComponent");
    return (UOverlapEffectsComponent*)res;
}
void UOverlapEffectsComponent::ProcessHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.OverlapEffectsComponent.ProcessHit"));
    struct Params_ProcessHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_ProcessHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void UOverlapEffectsComponent::ProcessEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.OverlapEffectsComponent.ProcessEndOverlap"));
    struct Params_ProcessEndOverlap {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_ProcessEndOverlap params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void UOverlapEffectsComponent::ProcessBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.OverlapEffectsComponent.ProcessBeginOverlap"));
    struct Params_ProcessBeginOverlap {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_ProcessBeginOverlap params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
