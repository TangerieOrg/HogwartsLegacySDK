#include "ALevelScriptActor.hpp"
#include "ASUB_GrandStaircaseTower_Ext_LOD1_C.hpp"
ASUB_GrandStaircaseTower_Ext_LOD1_C* ASUB_GrandStaircaseTower_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_GrandStaircaseTower/SUB_GrandStaircaseTower_EXTLOD/SUB_GrandStaircaseTower_Ext_LOD1.SUB_GrandStaircaseTower_Ext_LOD1_C");
    return (ASUB_GrandStaircaseTower_Ext_LOD1_C*)res;
}
