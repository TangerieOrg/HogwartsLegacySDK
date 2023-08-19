#include "FSceneRigStage_ActorReference.hpp"
#include "UCameraFixupActorAction.hpp"
#include "UObject.hpp"
UCameraFixupActorAction* UCameraFixupActorAction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraFixupActorAction");
    return (UCameraFixupActorAction*)res;
}
