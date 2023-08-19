#include "FTimeRigCoordinate.hpp"
#include "UFunction.hpp"
#include "USceneActionState_EmbeddedSceneRig.hpp"
#include "USceneRig.hpp"
#include "USceneRigActionState.hpp"
#include "USceneRigInstanceContext.hpp"
USceneActionState_EmbeddedSceneRig* USceneActionState_EmbeddedSceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_EmbeddedSceneRig");
    return (USceneActionState_EmbeddedSceneRig*)res;
}
void USceneActionState_EmbeddedSceneRig::OnNamedEventChanged(FTimeRigCoordinate PreviousValue, FTimeRigCoordinate CurrentValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneActionState_EmbeddedSceneRig.OnNamedEventChanged"));
    struct Params_OnNamedEventChanged {
        FTimeRigCoordinate PreviousValue; // 0x0
        FTimeRigCoordinate CurrentValue; // 0x4
    }; // Size: 0x8
    Params_OnNamedEventChanged params{};
    params.PreviousValue = (FTimeRigCoordinate)PreviousValue;
    params.CurrentValue = (FTimeRigCoordinate)CurrentValue;
    ProcessEvent(func, &params);
}
