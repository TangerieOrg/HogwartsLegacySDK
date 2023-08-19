#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsTick.hpp"
USpawnByPrimitiveOptionsTick* USpawnByPrimitiveOptionsTick::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsTick");
    return (USpawnByPrimitiveOptionsTick*)res;
}
