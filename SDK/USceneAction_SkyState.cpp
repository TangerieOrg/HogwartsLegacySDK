#include "FSkyStateSmoothInOut.hpp"
#include "USceneAction_SkyState.hpp"
#include "USceneRigActionBase.hpp"
#include "USkyStateOverride.hpp"
USceneAction_SkyState* USceneAction_SkyState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_SkyState");
    return (USceneAction_SkyState*)res;
}
