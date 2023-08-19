#include "UFunction.hpp"
#include "USceneActionState_AbandonStations.hpp"
#include "USceneRigObjectActionState.hpp"
void USceneActionState_AbandonStations::OnExited() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_AbandonStations.OnExited"));
    struct Params_OnExited {
    }; // Size: 0x0
    Params_OnExited params{};
    ProcessEvent(func, &params);
}
USceneActionState_AbandonStations* USceneActionState_AbandonStations::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_AbandonStations");
    return (USceneActionState_AbandonStations*)res;
}
