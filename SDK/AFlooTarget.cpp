#include "AEmitter.hpp"
#include "AFlooTarget.hpp"
#include "ATargetPoint.hpp"
#include "FSlateBrush.hpp"
#include "UFunction.hpp"
bool AFlooTarget::GetAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlooTarget.GetAvailable"));
    struct Params_GetAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AFlooTarget* AFlooTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlooTarget");
    return (AFlooTarget*)res;
}
void AFlooTarget::Handle_SetAvailable(bool availableIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlooTarget.Handle_SetAvailable"));
    struct Params_Handle_SetAvailable {
        bool availableIn; // 0x0
    }; // Size: 0x1
    Params_Handle_SetAvailable params{};
    params.availableIn = (bool)availableIn;
    ProcessEvent(func, &params);
}
void AFlooTarget::SetAvailable(bool availableIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlooTarget.SetAvailable"));
    struct Params_SetAvailable {
        bool availableIn; // 0x0
    }; // Size: 0x1
    Params_SetAvailable params{};
    params.availableIn = (bool)availableIn;
    ProcessEvent(func, &params);
}
