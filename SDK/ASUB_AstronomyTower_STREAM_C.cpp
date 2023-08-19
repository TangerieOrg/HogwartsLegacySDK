#include "ALevelScriptActor.hpp"
#include "ASUB_AstronomyTower_STREAM_C.hpp"
ASUB_AstronomyTower_STREAM_C* ASUB_AstronomyTower_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_AstronomyTower/SUB_AstronomyTower_STREAM_LvlInst_130.SUB_AstronomyTower_STREAM_C");
    return (ASUB_AstronomyTower_STREAM_C*)res;
}
