#include "USceneActionState_PeriodicSRTrigger.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_PeriodicSRTrigger* USceneActionState_PeriodicSRTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PeriodicSRTrigger");
    return (USceneActionState_PeriodicSRTrigger*)res;
}
