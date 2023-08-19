#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchOr.hpp"
UActorMeshSetupMatchOr* UActorMeshSetupMatchOr::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchOr");
    return (UActorMeshSetupMatchOr*)res;
}
