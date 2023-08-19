#include "AActor.hpp"
#include "ABakedRagdollPoseActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UBakedRagdollPoseComponent.hpp"
#include "UFunction.hpp"
ABakedRagdollPoseActor* ABakedRagdollPoseActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.BakedRagdollPoseActor");
    return (ABakedRagdollPoseActor*)res;
}
void ABakedRagdollPoseActor::HandleOnActorHit(AActor* SelfActor, AActor* OtherActor, FVector ImpulseNormal, FHitResult& HitReslt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ragdoll.BakedRagdollPoseActor.HandleOnActorHit"));
    struct Params_HandleOnActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector ImpulseNormal; // 0x10
        FHitResult HitReslt; // 0x1c
    }; // Size: 0xa4
    Params_HandleOnActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.ImpulseNormal = (FVector)ImpulseNormal;
    params.HitReslt = (FHitResult)HitReslt;
    ProcessEvent(func, &params);
    HitReslt = params.HitReslt;
}
