#include "ALevelScriptActor.hpp"
#include "ASUB_ViaductCourtyard_Ext_LOD1_C.hpp"
ASUB_ViaductCourtyard_Ext_LOD1_C* ASUB_ViaductCourtyard_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ViaductCourtyard/SUB_ViaductCourtyard_EXTLOD/SUB_ViaductCourtyard_Ext_LOD1.SUB_ViaductCourtyard_Ext_LOD1_C");
    return (ASUB_ViaductCourtyard_Ext_LOD1_C*)res;
}
