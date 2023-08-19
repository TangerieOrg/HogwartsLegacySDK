#include "ALevelScriptActor.hpp"
#include "ASUB_AstronomyTower_EXT_LOD1_C.hpp"
ASUB_AstronomyTower_EXT_LOD1_C* ASUB_AstronomyTower_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_AstronomyTower/SUB_AstronomyTower_EXTLOD/SUB_AstronomyTower_EXT_LOD1.SUB_AstronomyTower_EXT_LOD1_C");
    return (ASUB_AstronomyTower_EXT_LOD1_C*)res;
}
