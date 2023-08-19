#include "ALevelScriptActor.hpp"
#include "ASUB_QuadCourtyard_Ext_LOD1_C.hpp"
ASUB_QuadCourtyard_Ext_LOD1_C* ASUB_QuadCourtyard_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_QuadCourtyard/SUB_QuadCourtyard_EXTLOD/SUB_QuadCourtyard_Ext_LOD1.SUB_QuadCourtyard_Ext_LOD1_C");
    return (ASUB_QuadCourtyard_Ext_LOD1_C*)res;
}
