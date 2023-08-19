#include "AkAcousticPortalState.hpp"
#include "ECollisionChannel.hpp"
#include "UAkPortalComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
UAkPortalComponent* UAkPortalComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkPortalComponent");
    return (UAkPortalComponent*)res;
}
bool UAkPortalComponent::PortalPlacementValid() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkPortalComponent.PortalPlacementValid"));
    struct Params_PortalPlacementValid {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PortalPlacementValid params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAkPortalComponent::OpenPortal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkPortalComponent.OpenPortal"));
    struct Params_OpenPortal {
    }; // Size: 0x0
    Params_OpenPortal params{};
    ProcessEvent(func, &params);
}
AkAcousticPortalState UAkPortalComponent::GetCurrentState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkPortalComponent.GetCurrentState"));
    struct Params_GetCurrentState {
        AkAcousticPortalState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentState params{};
    ProcessEvent(func, &params);
    return (AkAcousticPortalState)params.ReturnValue;
}
UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkPortalComponent.GetPrimitiveParent"));
    struct Params_GetPrimitiveParent {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPrimitiveParent params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
void UAkPortalComponent::ClosePortal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkPortalComponent.ClosePortal"));
    struct Params_ClosePortal {
    }; // Size: 0x0
    Params_ClosePortal params{};
    ProcessEvent(func, &params);
}
