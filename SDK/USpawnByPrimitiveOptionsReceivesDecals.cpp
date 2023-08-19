#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsReceivesDecals.hpp"
USpawnByPrimitiveOptionsReceivesDecals* USpawnByPrimitiveOptionsReceivesDecals::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsReceivesDecals");
    return (USpawnByPrimitiveOptionsReceivesDecals*)res;
}
