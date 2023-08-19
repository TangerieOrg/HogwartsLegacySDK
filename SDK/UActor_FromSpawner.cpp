#include "UActorProvider.hpp"
#include "UActorSpawner.hpp"
#include "UActor_FromSpawner.hpp"
UActor_FromSpawner* UActor_FromSpawner::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Actor_FromSpawner");
    return (UActor_FromSpawner*)res;
}
