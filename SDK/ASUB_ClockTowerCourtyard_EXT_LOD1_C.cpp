#include "ALevelScriptActor.hpp"
#include "ASUB_ClockTowerCourtyard_EXT_LOD1_C.hpp"
ASUB_ClockTowerCourtyard_EXT_LOD1_C* ASUB_ClockTowerCourtyard_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ClockTowerCourtyard/SUB_ClockTowerCourtyard_EXTLOD/SUB_ClockTowerCourtyard_EXT_LOD1.SUB_ClockTowerCourtyard_EXT_LOD1_C");
    return (ASUB_ClockTowerCourtyard_EXT_LOD1_C*)res;
}
