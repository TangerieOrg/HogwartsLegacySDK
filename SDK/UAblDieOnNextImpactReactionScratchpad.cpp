#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblDieOnNextImpactReactionScratchpad.hpp"
#include "UFunction.hpp"
UAblDieOnNextImpactReactionScratchpad* UAblDieOnNextImpactReactionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblDieOnNextImpactReactionScratchpad");
    return (UAblDieOnNextImpactReactionScratchpad*)res;
}
void UAblDieOnNextImpactReactionScratchpad::HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AblDieOnNextImpactReactionScratchpad.HandleActorHit"));
    struct Params_HandleActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_HandleActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
