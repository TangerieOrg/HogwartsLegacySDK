#include "UFunction.hpp"
#include "USceneActionState_FastTravel.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_FastTravel* USceneActionState_FastTravel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_FastTravel");
    return (USceneActionState_FastTravel*)res;
}
void USceneActionState_FastTravel::OnArrived() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_FastTravel.OnArrived"));
    struct Params_OnArrived {
    }; // Size: 0x0
    Params_OnArrived params{};
    ProcessEvent(func, &params);
}
