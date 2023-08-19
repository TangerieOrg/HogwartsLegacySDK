#include "ALevelScriptActor.hpp"
#include "ASUB_ClockTower_Ext_LOD1_C.hpp"
ASUB_ClockTower_Ext_LOD1_C* ASUB_ClockTower_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ClockTower/SUB_ClockTower_EXTLOD/SUB_ClockTower_Ext_LOD1.SUB_ClockTower_Ext_LOD1_C");
    return (ASUB_ClockTower_Ext_LOD1_C*)res;
}
