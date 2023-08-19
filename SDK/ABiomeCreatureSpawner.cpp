#include "ABiomeCreatureSpawner.hpp"
#include "ADynamicObjectVolume.hpp"
ABiomeCreatureSpawner* ABiomeCreatureSpawner::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BiomeCreatureSpawner");
    return (ABiomeCreatureSpawner*)res;
}
