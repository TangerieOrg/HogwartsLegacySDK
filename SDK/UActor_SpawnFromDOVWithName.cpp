#include "UActor_SpawnFromDOVBase.hpp"
#include "UActor_SpawnFromDOVWithName.hpp"
UActor_SpawnFromDOVWithName* UActor_SpawnFromDOVWithName::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_SpawnFromDOVWithName");
    return (UActor_SpawnFromDOVWithName*)res;
}
