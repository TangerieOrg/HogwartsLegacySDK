#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USocialAgentComponent.hpp"
#include "USocialAgentPawnComponent.hpp"
USocialAgentPawnComponent* USocialAgentPawnComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialAgentPawnComponent");
    return (USocialAgentPawnComponent*)res;
}
void USocialAgentPawnComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SocialDisplay.SocialAgentPawnComponent.OnActorHit"));
    struct Params_OnActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
