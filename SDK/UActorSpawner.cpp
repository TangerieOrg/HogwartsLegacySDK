#include "UActorSpawner.hpp"
#include "UBaseProvider.hpp"
#include "UTransformProvider.hpp"
UActorSpawner* UActorSpawner::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ActorSpawner");
    return (UActorSpawner*)res;
}
