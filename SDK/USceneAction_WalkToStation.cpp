#include "EPerformTaskFinishAction.hpp"
#include "EPerformTaskSpeedMode.hpp"
#include "UActorProvider.hpp"
#include "USceneAction_WalkToStation.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_WalkToStation* USceneAction_WalkToStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WalkToStation");
    return (USceneAction_WalkToStation*)res;
}
