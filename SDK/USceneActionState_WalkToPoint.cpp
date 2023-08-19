#include "UFunction.hpp"
#include "USceneActionState_WalkToPoint.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_WalkToPoint* USceneActionState_WalkToPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WalkToPoint");
    return (USceneActionState_WalkToPoint*)res;
}
void USceneActionState_WalkToPoint::OnArrived() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_WalkToPoint.OnArrived"));
    struct Params_OnArrived {
    }; // Size: 0x0
    Params_OnArrived params{};
    ProcessEvent(func, &params);
}
