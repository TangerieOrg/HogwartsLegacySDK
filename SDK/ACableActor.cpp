#include "AActor.hpp"
#include "ACableActor.hpp"
#include "UCableComponent.hpp"
ACableActor* ACableActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CableComponent.CableActor");
    return (ACableActor*)res;
}
