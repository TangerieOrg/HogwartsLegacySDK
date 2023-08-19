#include "FMaterialSwapRules.hpp"
#include "UMultiFX2_ActorMeshStates.hpp"
#include "UMultiFX2_ActorMeshStatesRules.hpp"
UMultiFX2_ActorMeshStatesRules* UMultiFX2_ActorMeshStatesRules::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ActorMeshStatesRules");
    return (UMultiFX2_ActorMeshStatesRules*)res;
}
