#include "ALevelScriptActor.hpp"
#include "ASUB_EntranceHall_Ext_LOD1_C.hpp"
ASUB_EntranceHall_Ext_LOD1_C* ASUB_EntranceHall_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_EntranceHall/SUB_EntranceHall_EXTLOD/SUB_EntranceHall_Ext_LOD1.SUB_EntranceHall_Ext_LOD1_C");
    return (ASUB_EntranceHall_Ext_LOD1_C*)res;
}
