#include "UActorMeshSetupProcess.hpp"
#include "UActorMeshSetupProcessAddTag.hpp"
UActorMeshSetupProcessAddTag* UActorMeshSetupProcessAddTag::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessAddTag");
    return (UActorMeshSetupProcessAddTag*)res;
}
