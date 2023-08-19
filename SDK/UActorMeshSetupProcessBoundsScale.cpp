#include "UActorMeshSetupProcessBoundsScale.hpp"
#include "UActorMeshSetupProcessFiltered.hpp"
UActorMeshSetupProcessBoundsScale* UActorMeshSetupProcessBoundsScale::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessBoundsScale");
    return (UActorMeshSetupProcessBoundsScale*)res;
}
