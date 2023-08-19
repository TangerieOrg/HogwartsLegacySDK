#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsDrawDistance.hpp"
USpawnByPrimitiveOptionsDrawDistance* USpawnByPrimitiveOptionsDrawDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsDrawDistance");
    return (USpawnByPrimitiveOptionsDrawDistance*)res;
}
