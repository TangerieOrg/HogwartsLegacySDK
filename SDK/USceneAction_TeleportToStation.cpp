#include "UActorProvider.hpp"
#include "USceneAction_TeleportToStation.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_TeleportToStation* USceneAction_TeleportToStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_TeleportToStation");
    return (USceneAction_TeleportToStation*)res;
}
