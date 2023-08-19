#include "AActor.hpp"
#include "AMaterialPreLoadKeysActor.hpp"
#include "AMaterialPreLoadKeysActorListActor.hpp"
AMaterialPreLoadKeysActorListActor* AMaterialPreLoadKeysActorListActor::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPreLoadKeysActorListActor");
    return (AMaterialPreLoadKeysActorListActor*)res;
}
