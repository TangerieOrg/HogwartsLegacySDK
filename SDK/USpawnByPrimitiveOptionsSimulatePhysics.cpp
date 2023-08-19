#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsSimulatePhysics.hpp"
USpawnByPrimitiveOptionsSimulatePhysics* USpawnByPrimitiveOptionsSimulatePhysics::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsSimulatePhysics");
    return (USpawnByPrimitiveOptionsSimulatePhysics*)res;
}
