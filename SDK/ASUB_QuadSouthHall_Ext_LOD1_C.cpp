#include "ALevelScriptActor.hpp"
#include "ASUB_QuadSouthHall_Ext_LOD1_C.hpp"
ASUB_QuadSouthHall_Ext_LOD1_C* ASUB_QuadSouthHall_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_QuadSouthHall/SUB_QuadSouthHall_ExtLOD/SUB_QuadSouthHall_Ext_LOD1.SUB_QuadSouthHall_Ext_LOD1_C");
    return (ASUB_QuadSouthHall_Ext_LOD1_C*)res;
}
