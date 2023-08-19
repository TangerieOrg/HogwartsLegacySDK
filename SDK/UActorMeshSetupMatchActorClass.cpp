#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchActorClass.hpp"
UActorMeshSetupMatchActorClass* UActorMeshSetupMatchActorClass::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchActorClass");
    return (UActorMeshSetupMatchActorClass*)res;
}
