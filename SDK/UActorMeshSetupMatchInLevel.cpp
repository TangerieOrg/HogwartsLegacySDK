#include "FLerpVolumesLevelName.hpp"
#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchInLevel.hpp"
UActorMeshSetupMatchInLevel* UActorMeshSetupMatchInLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActorMeshSetupMatchInLevel");
    return (UActorMeshSetupMatchInLevel*)res;
}
