#include "ALevelScriptActor.hpp"
#include "ASUB_Greenhouses_EXT_LOD1_C.hpp"
ASUB_Greenhouses_EXT_LOD1_C* ASUB_Greenhouses_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Greenhouses/SUB_Greenhouses_EXTLOD/SUB_Greenhouses_EXT_LOD1.SUB_Greenhouses_EXT_LOD1_C");
    return (ASUB_Greenhouses_EXT_LOD1_C*)res;
}
