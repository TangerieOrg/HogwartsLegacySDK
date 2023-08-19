#include "USceneActionState_DisableSchedule.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_DisableSchedule* USceneActionState_DisableSchedule::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_DisableSchedule");
    return (USceneActionState_DisableSchedule*)res;
}
