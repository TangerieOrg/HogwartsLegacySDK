#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchActorClasses.hpp"
UActorMeshSetupMatchActorClasses* UActorMeshSetupMatchActorClasses::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchActorClasses");
    return (UActorMeshSetupMatchActorClasses*)res;
}
