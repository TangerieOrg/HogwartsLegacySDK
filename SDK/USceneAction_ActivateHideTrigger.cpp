#include "USceneAction_ActivateHideTrigger.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ActivateHideTrigger* USceneAction_ActivateHideTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ActivateHideTrigger");
    return (USceneAction_ActivateHideTrigger*)res;
}
