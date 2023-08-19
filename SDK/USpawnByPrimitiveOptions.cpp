#include "UObject.hpp"
#include "USpawnByPrimitiveOptions.hpp"
USpawnByPrimitiveOptions* USpawnByPrimitiveOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptions");
    return (USpawnByPrimitiveOptions*)res;
}
