#include "UActorProvider.hpp"
#include "UActor_SpawnFromDOVBase.hpp"
UActor_SpawnFromDOVBase* UActor_SpawnFromDOVBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_SpawnFromDOVBase");
    return (UActor_SpawnFromDOVBase*)res;
}
