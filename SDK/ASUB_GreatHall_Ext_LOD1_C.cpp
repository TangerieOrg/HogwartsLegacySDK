#include "ALevelScriptActor.hpp"
#include "ASUB_GreatHall_Ext_LOD1_C.hpp"
ASUB_GreatHall_Ext_LOD1_C* ASUB_GreatHall_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_GreatHall/SUB_GreatHall_EXTLOD/SUB_GreatHall_Ext_LOD1.SUB_GreatHall_Ext_LOD1_C");
    return (ASUB_GreatHall_Ext_LOD1_C*)res;
}
