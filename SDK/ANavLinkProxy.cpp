#include "AActor.hpp"
#include "ANavLinkProxy.hpp"
#include "FNavigationLink.hpp"
#include "FNavigationSegmentLink.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNavLinkCustomComponent.hpp"
ANavLinkProxy* ANavLinkProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.NavLinkProxy");
    return (ANavLinkProxy*)res;
}
void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled"));
    struct Params_SetSmartLinkEnabled {
        bool bEnabled; // 0x0
    }; // Size: 0x1
    Params_SetSmartLinkEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ProcessEvent(func, &params);
}
void ANavLinkProxy::ResumePathFollowing(AActor* Agent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLinkProxy.ResumePathFollowing"));
    struct Params_ResumePathFollowing {
        AActor* Agent; // 0x0
    }; // Size: 0x8
    Params_ResumePathFollowing params{};
    params.Agent = (AActor*)Agent;
    ProcessEvent(func, &params);
}
void ANavLinkProxy::ReceiveSmartLinkReached(AActor* Agent, FVector& Destination) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached"));
    struct Params_ReceiveSmartLinkReached {
        AActor* Agent; // 0x0
        FVector Destination; // 0x8
    }; // Size: 0x14
    Params_ReceiveSmartLinkReached params{};
    params.Agent = (AActor*)Agent;
    params.Destination = (FVector)Destination;
    ProcessEvent(func, &params);
    Destination = params.Destination;
}
bool ANavLinkProxy::IsSmartLinkEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled"));
    struct Params_IsSmartLinkEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSmartLinkEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ANavLinkProxy::HasMovingAgents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLinkProxy.HasMovingAgents"));
    struct Params_HasMovingAgents {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasMovingAgents params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
