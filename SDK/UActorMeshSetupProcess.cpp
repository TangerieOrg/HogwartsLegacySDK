#include "UActorMeshSetupProcess.hpp"
#include "UObject.hpp"
UActorMeshSetupProcess* UActorMeshSetupProcess::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcess");
    return (UActorMeshSetupProcess*)res;
}
