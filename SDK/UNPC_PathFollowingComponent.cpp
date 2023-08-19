#include "FVector.hpp"
#include "UCharacterMovementComponent.hpp"
#include "UFunction.hpp"
#include "UNPC_Component.hpp"
#include "UNPC_PathFollowingComponent.hpp"
#include "UPathFollowingComponent.hpp"
UNPC_PathFollowingComponent* UNPC_PathFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_PathFollowingComponent");
    return (UNPC_PathFollowingComponent*)res;
}
bool UNPC_PathFollowingComponent::FindLinkOnCurrentPath(FVector& OutPos, float MinLookaheadDistance, float LookAheadTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_PathFollowingComponent.FindLinkOnCurrentPath"));
    struct Params_FindLinkOnCurrentPath {
        FVector OutPos; // 0x0
        float MinLookaheadDistance; // 0xc
        float LookAheadTime; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_FindLinkOnCurrentPath params{};
    params.OutPos = (FVector)OutPos;
    params.MinLookaheadDistance = (float)MinLookaheadDistance;
    params.LookAheadTime = (float)LookAheadTime;
    ProcessEvent(func, &params);
    OutPos = params.OutPos;
    return (bool)params.ReturnValue;
}
