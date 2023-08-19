#include "FLightComponentStatesSaveData.hpp"
#include "USceneActionState_LightComponentStates.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_LightComponentStates* USceneActionState_LightComponentStates::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_LightComponentStates");
    return (USceneActionState_LightComponentStates*)res;
}
