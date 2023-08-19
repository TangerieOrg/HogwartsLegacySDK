#include "FWorldActorReference.hpp"
#include "UActor_SpawnFromDOV.hpp"
#include "UActor_SpawnFromDOVBase.hpp"
UActor_SpawnFromDOV* UActor_SpawnFromDOV::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_SpawnFromDOV");
    return (UActor_SpawnFromDOV*)res;
}
