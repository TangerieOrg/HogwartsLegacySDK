#include "UCameraFixupActorAction.hpp"
#include "UCameraFixupOperation.hpp"
#include "UCameraFixupOperations.hpp"
#include "UClass.hpp"
#include "UDataAsset.hpp"
UCameraFixupOperations* UCameraFixupOperations::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraFixupOperations");
    return (UCameraFixupOperations*)res;
}
