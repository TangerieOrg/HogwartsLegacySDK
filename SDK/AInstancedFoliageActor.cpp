#include "AActor.hpp"
#include "AInstancedFoliageActor.hpp"
AInstancedFoliageActor* AInstancedFoliageActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.InstancedFoliageActor");
    return (AInstancedFoliageActor*)res;
}
