#include "ALevelScriptActor.hpp"
#include "ASUB_Garden_Ext_LOD1_C.hpp"
ASUB_Garden_Ext_LOD1_C* ASUB_Garden_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Garden/SUB_Garden_EXTLOD/SUB_Garden_Ext_LOD1.SUB_Garden_Ext_LOD1_C");
    return (ASUB_Garden_Ext_LOD1_C*)res;
}
