#include "ALevelScriptActor.hpp"
#include "ASUB_FacultyTower_Ext_LOD1_C.hpp"
ASUB_FacultyTower_Ext_LOD1_C* ASUB_FacultyTower_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_FacultyTower/SUB_FacultyTower_EXTLOD/SUB_FacultyTower_Ext_LOD1.SUB_FacultyTower_Ext_LOD1_C");
    return (ASUB_FacultyTower_Ext_LOD1_C*)res;
}
