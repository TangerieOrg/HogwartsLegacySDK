#include "ALevelScriptActor.hpp"
#include "ASUB_QuadNorthHall_Ext_LOD1_C.hpp"
ASUB_QuadNorthHall_Ext_LOD1_C* ASUB_QuadNorthHall_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_QuadNorthHall/SUB_QuadNorthHall_EXTLOD/SUB_QuadNorthHall_Ext_LOD1.SUB_QuadNorthHall_Ext_LOD1_C");
    return (ASUB_QuadNorthHall_Ext_LOD1_C*)res;
}
