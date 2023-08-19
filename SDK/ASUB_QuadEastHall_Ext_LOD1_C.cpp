#include "ALevelScriptActor.hpp"
#include "ASUB_QuadEastHall_Ext_LOD1_C.hpp"
ASUB_QuadEastHall_Ext_LOD1_C* ASUB_QuadEastHall_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_QuadEastHall/SUB_QuadEastHall_ExtLOD/SUB_QuadEastHall_Ext_LOD1.SUB_QuadEastHall_Ext_LOD1_C");
    return (ASUB_QuadEastHall_Ext_LOD1_C*)res;
}
