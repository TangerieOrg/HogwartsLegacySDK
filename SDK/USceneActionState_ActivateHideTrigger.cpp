#include "USceneActionState_ActivateHideTrigger.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ActivateHideTrigger* USceneActionState_ActivateHideTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ActivateHideTrigger");
    return (USceneActionState_ActivateHideTrigger*)res;
}
