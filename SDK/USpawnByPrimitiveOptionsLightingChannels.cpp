#include "FLightingChannels.hpp"
#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsLightingChannels.hpp"
USpawnByPrimitiveOptionsLightingChannels* USpawnByPrimitiveOptionsLightingChannels::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsLightingChannels");
    return (USpawnByPrimitiveOptionsLightingChannels*)res;
}
