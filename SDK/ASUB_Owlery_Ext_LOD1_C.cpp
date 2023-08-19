#include "ALevelScriptActor.hpp"
#include "ASUB_Owlery_Ext_LOD1_C.hpp"
ASUB_Owlery_Ext_LOD1_C* ASUB_Owlery_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Owlery/SUB_Owlery_EXTLOD/SUB_Owlery_Ext_LOD1.SUB_Owlery_Ext_LOD1_C");
    return (ASUB_Owlery_Ext_LOD1_C*)res;
}
