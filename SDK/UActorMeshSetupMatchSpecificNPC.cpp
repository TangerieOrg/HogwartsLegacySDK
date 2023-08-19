#include "FDbSingleColumnInfo.hpp"
#include "UActorMeshSetupMatch.hpp"
#include "UActorMeshSetupMatchSpecificNPC.hpp"
UActorMeshSetupMatchSpecificNPC* UActorMeshSetupMatchSpecificNPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActorMeshSetupMatchSpecificNPC");
    return (UActorMeshSetupMatchSpecificNPC*)res;
}
