#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsOccluder.hpp"
USpawnByPrimitiveOptionsOccluder* USpawnByPrimitiveOptionsOccluder::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsOccluder");
    return (USpawnByPrimitiveOptionsOccluder*)res;
}
