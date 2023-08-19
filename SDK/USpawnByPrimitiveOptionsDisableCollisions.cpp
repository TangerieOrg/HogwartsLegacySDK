#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsDisableCollisions.hpp"
USpawnByPrimitiveOptionsDisableCollisions* USpawnByPrimitiveOptionsDisableCollisions::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsDisableCollisions");
    return (USpawnByPrimitiveOptionsDisableCollisions*)res;
}
