#include "USceneActionState_TeleportToStation.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_TeleportToStation* USceneActionState_TeleportToStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_TeleportToStation");
    return (USceneActionState_TeleportToStation*)res;
}
