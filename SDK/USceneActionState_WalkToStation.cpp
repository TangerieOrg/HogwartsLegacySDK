#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneActionState_WalkToStation.hpp"
#include "USceneRigObjectActionState.hpp"
void USceneActionState_WalkToStation::OnArrived(UObject* InCaller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_WalkToStation.OnArrived"));
    struct Params_OnArrived {
        UObject* InCaller; // 0x0
    }; // Size: 0x8
    Params_OnArrived params{};
    params.InCaller = (UObject*)InCaller;
    ProcessEvent(func, &params);
}
USceneActionState_WalkToStation* USceneActionState_WalkToStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WalkToStation");
    return (USceneActionState_WalkToStation*)res;
}
