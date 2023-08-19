#include "UMultiFX2_ActorMeshStates.hpp"
#include "UMultiFX2_ActorMeshStatesSimple.hpp"
UMultiFX2_ActorMeshStatesSimple* UMultiFX2_ActorMeshStatesSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ActorMeshStatesSimple");
    return (UMultiFX2_ActorMeshStatesSimple*)res;
}
