#include "AActor.hpp"
#include "AMaterialInstanceActor.hpp"
AMaterialInstanceActor* AMaterialInstanceActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialInstanceActor");
    return (AMaterialInstanceActor*)res;
}
