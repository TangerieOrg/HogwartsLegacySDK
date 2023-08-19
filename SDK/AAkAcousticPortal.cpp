#include "AAkAcousticPortal.hpp"
#include "AVolume.hpp"
#include "AkAcousticPortalState.hpp"
#include "UAkPortalComponent.hpp"
#include "UFunction.hpp"
AAkAcousticPortal* AAkAcousticPortal::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkAcousticPortal");
    return (AAkAcousticPortal*)res;
}
AkAcousticPortalState AAkAcousticPortal::GetCurrentState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAcousticPortal.GetCurrentState"));
    struct Params_GetCurrentState {
        AkAcousticPortalState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentState params{};
    ProcessEvent(func, &params);
    return (AkAcousticPortalState)params.ReturnValue;
}
void AAkAcousticPortal::OpenPortal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAcousticPortal.OpenPortal"));
    struct Params_OpenPortal {
    }; // Size: 0x0
    Params_OpenPortal params{};
    ProcessEvent(func, &params);
}
void AAkAcousticPortal::ClosePortal() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkAcousticPortal.ClosePortal"));
    struct Params_ClosePortal {
    }; // Size: 0x0
    Params_ClosePortal params{};
    ProcessEvent(func, &params);
}
