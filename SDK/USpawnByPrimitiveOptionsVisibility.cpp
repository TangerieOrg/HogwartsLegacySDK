#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsVisibility.hpp"
USpawnByPrimitiveOptionsVisibility* USpawnByPrimitiveOptionsVisibility::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsVisibility");
    return (USpawnByPrimitiveOptionsVisibility*)res;
}
