#include "FVector.hpp"
#include "UCrowdFollowingComponent.hpp"
#include "UFunction.hpp"
#include "UPathFollowingComponent.hpp"
UCrowdFollowingComponent* UCrowdFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.CrowdFollowingComponent");
    return (UCrowdFollowingComponent*)res;
}
void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering"));
    struct Params_SuspendCrowdSteering {
        bool bSuspend; // 0x0
    }; // Size: 0x1
    Params_SuspendCrowdSteering params{};
    params.bSuspend = (bool)bSuspend;
    ProcessEvent(func, &params);
}
