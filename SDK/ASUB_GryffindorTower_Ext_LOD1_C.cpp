#include "ALevelScriptActor.hpp"
#include "ASUB_GryffindorTower_Ext_LOD1_C.hpp"
ASUB_GryffindorTower_Ext_LOD1_C* ASUB_GryffindorTower_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_GryffindorTower/SUB_GryffindorTower_EXTLOD/SUB_GryffindorTower_Ext_LOD1.SUB_GryffindorTower_Ext_LOD1_C");
    return (ASUB_GryffindorTower_Ext_LOD1_C*)res;
}
