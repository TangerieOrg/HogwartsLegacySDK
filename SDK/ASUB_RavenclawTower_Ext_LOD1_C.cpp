#include "ALevelScriptActor.hpp"
#include "ASUB_RavenclawTower_Ext_LOD1_C.hpp"
ASUB_RavenclawTower_Ext_LOD1_C* ASUB_RavenclawTower_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_RavenclawTower/SUB_RavenclawTower_EXTLOD/SUB_RavenclawTower_Ext_LOD1.SUB_RavenclawTower_Ext_LOD1_C");
    return (ASUB_RavenclawTower_Ext_LOD1_C*)res;
}
