#include "AAROriginActor.hpp"
#include "AActor.hpp"
AAROriginActor* AAROriginActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.AROriginActor");
    return (AAROriginActor*)res;
}
