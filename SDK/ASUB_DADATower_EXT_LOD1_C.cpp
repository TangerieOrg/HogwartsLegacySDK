#include "ALevelScriptActor.hpp"
#include "ASUB_DADATower_EXT_LOD1_C.hpp"
ASUB_DADATower_EXT_LOD1_C* ASUB_DADATower_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_DADATower/SUB_DADATower_EXTLOD/SUB_DADATower_EXT_LOD1.SUB_DADATower_EXT_LOD1_C");
    return (ASUB_DADATower_EXT_LOD1_C*)res;
}
