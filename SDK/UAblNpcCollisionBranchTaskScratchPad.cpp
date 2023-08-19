#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UAblBranchTaskScratchPad.hpp"
#include "UAblNpcCollisionBranchTaskScratchPad.hpp"
#include "UFunction.hpp"
UAblNpcCollisionBranchTaskScratchPad* UAblNpcCollisionBranchTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcCollisionBranchTaskScratchPad");
    return (UAblNpcCollisionBranchTaskScratchPad*)res;
}
void UAblNpcCollisionBranchTaskScratchPad::OnNpcCapsuleHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AblNpcCollisionBranchTaskScratchPad.OnNpcCapsuleHit"));
    struct Params_OnNpcCapsuleHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnNpcCapsuleHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
