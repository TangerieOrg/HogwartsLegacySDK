#include "AMaterialPreLoadKeysActor.hpp"
#include "AMaterialPreLoadKeysAllActor.hpp"
AMaterialPreLoadKeysAllActor* AMaterialPreLoadKeysAllActor::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPreLoadKeysAllActor");
    return (AMaterialPreLoadKeysAllActor*)res;
}
