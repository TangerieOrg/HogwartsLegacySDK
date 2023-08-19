#include "UMaterialSwapMeshState.hpp"
#include "UMultiFX2_ActorMeshStates.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_ActorMeshStates* UMultiFX2_ActorMeshStates::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ActorMeshStates");
    return (UMultiFX2_ActorMeshStates*)res;
}
