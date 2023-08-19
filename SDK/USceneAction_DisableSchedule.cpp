#include "EScheduleEnableDisable.hpp"
#include "USceneAction_DisableSchedule.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_DisableSchedule* USceneAction_DisableSchedule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_DisableSchedule");
    return (USceneAction_DisableSchedule*)res;
}
