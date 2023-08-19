#include "ALevelScriptActor.hpp"
#include "ASUB_Boathouse_Ext_LOD1_C.hpp"
ASUB_Boathouse_Ext_LOD1_C* ASUB_Boathouse_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Boathouse/SUB_Boathouse_ExtLOD/SUB_Boathouse_Ext_LOD1.SUB_Boathouse_Ext_LOD1_C");
    return (ASUB_Boathouse_Ext_LOD1_C*)res;
}
