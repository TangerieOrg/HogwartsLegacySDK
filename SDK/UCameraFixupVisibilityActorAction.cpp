#include "EManagedVisibilityPriority.hpp"
#include "UCameraFixupActorAction.hpp"
#include "UCameraFixupVisibilityActorAction.hpp"
UCameraFixupVisibilityActorAction* UCameraFixupVisibilityActorAction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraFixupVisibilityActorAction");
    return (UCameraFixupVisibilityActorAction*)res;
}
