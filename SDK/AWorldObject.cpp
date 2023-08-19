#include "AInteractiveObjectActor.hpp"
#include "AWorldObject.hpp"
#include "EInteractiveState.hpp"
#include "UFunction.hpp"
AWorldObject* AWorldObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldObject");
    return (AWorldObject*)res;
}
void AWorldObject::NotifyCurrentState(EInteractiveState CurrentObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldObject.NotifyCurrentState"));
    struct Params_NotifyCurrentState {
        EInteractiveState CurrentObjectState; // 0x0
    }; // Size: 0x1
    Params_NotifyCurrentState params{};
    params.CurrentObjectState = (EInteractiveState)CurrentObjectState;
    ProcessEvent(func, &params);
}
bool AWorldObject::TryCreateBeacon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldObject.TryCreateBeacon"));
    struct Params_TryCreateBeacon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_TryCreateBeacon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWorldObject::OnAboutToSaveGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldObject.OnAboutToSaveGame"));
    struct Params_OnAboutToSaveGame {
    }; // Size: 0x0
    Params_OnAboutToSaveGame params{};
    ProcessEvent(func, &params);
}
