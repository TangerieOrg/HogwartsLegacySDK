#include "ALevelScriptActor.hpp"
#include "ASUB_BoathouseStairway_Ext_LOD1_C.hpp"
ASUB_BoathouseStairway_Ext_LOD1_C* ASUB_BoathouseStairway_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_BoathouseStairway/SUB_BoathouseStairway_ExtLOD/SUB_BoathouseStairway_Ext_LOD1.SUB_BoathouseStairway_Ext_LOD1_C");
    return (ASUB_BoathouseStairway_Ext_LOD1_C*)res;
}
