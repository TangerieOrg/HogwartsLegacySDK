#include "FWorldActorReference.hpp"
#include "UActorProvider.hpp"
#include "UActor_WorldReference.hpp"
UActor_WorldReference* UActor_WorldReference::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_WorldReference");
    return (UActor_WorldReference*)res;
}
