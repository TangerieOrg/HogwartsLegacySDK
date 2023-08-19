#include "UActorMeshSetupMatchActorNoTag.hpp"
#include "UActorMeshSetupMatchActorTag.hpp"
UActorMeshSetupMatchActorNoTag* UActorMeshSetupMatchActorNoTag::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchActorNoTag");
    return (UActorMeshSetupMatchActorNoTag*)res;
}
