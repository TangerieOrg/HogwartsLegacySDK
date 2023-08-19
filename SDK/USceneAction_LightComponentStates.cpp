#include "ULightComponentState.hpp"
#include "USceneAction_LightComponentStates.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_LightComponentStates* USceneAction_LightComponentStates::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_LightComponentStates");
    return (USceneAction_LightComponentStates*)res;
}
