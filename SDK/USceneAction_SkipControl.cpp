#include "USceneAction_SkipControl.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_SkipControl* USceneAction_SkipControl::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_SkipControl");
    return (USceneAction_SkipControl*)res;
}
