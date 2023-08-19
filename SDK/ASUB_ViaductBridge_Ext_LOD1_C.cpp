#include "ALevelScriptActor.hpp"
#include "ASUB_ViaductBridge_Ext_LOD1_C.hpp"
ASUB_ViaductBridge_Ext_LOD1_C* ASUB_ViaductBridge_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ViaductBridge/SUB_ViaductBridge_ExtLOD/SUB_ViaductBridge_Ext_LOD1.SUB_ViaductBridge_Ext_LOD1_C");
    return (ASUB_ViaductBridge_Ext_LOD1_C*)res;
}
