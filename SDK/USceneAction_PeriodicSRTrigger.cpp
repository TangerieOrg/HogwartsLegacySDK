#include "USceneAction_PeriodicSRTrigger.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_PeriodicSRTrigger* USceneAction_PeriodicSRTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PeriodicSRTrigger");
    return (USceneAction_PeriodicSRTrigger*)res;
}
