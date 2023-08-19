#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPreferredNavDataPathFollowingComponent.hpp"
#include "USocialAgentPawnComponent.hpp"
#include "USocialFollowingComponent.hpp"
void USocialFollowingComponent::OnMovementUpdated(float i_deltaSeconds, FVector i_oldLocation, FVector i_oldVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SocialDisplay.SocialFollowingComponent.OnMovementUpdated"));
    struct Params_OnMovementUpdated {
        float i_deltaSeconds; // 0x0
        FVector i_oldLocation; // 0x4
        FVector i_oldVelocity; // 0x10
    }; // Size: 0x1c
    Params_OnMovementUpdated params{};
    params.i_deltaSeconds = (float)i_deltaSeconds;
    params.i_oldLocation = (FVector)i_oldLocation;
    params.i_oldVelocity = (FVector)i_oldVelocity;
    ProcessEvent(func, &params);
}
USocialFollowingComponent* USocialFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SocialDisplay.SocialFollowingComponent");
    return (USocialFollowingComponent*)res;
}
