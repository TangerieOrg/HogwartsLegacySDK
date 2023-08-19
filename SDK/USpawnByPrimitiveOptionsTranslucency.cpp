#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsTranslucency.hpp"
USpawnByPrimitiveOptionsTranslucency* USpawnByPrimitiveOptionsTranslucency::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsTranslucency");
    return (USpawnByPrimitiveOptionsTranslucency*)res;
}
