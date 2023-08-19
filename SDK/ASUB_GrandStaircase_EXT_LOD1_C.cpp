#include "ALevelScriptActor.hpp"
#include "ASUB_GrandStaircase_EXT_LOD1_C.hpp"
ASUB_GrandStaircase_EXT_LOD1_C* ASUB_GrandStaircase_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_GrandStaircase/SUB_GrandStaircase_EXTLOD/SUB_GrandStaircase_EXT_LOD1.SUB_GrandStaircase_EXT_LOD1_C");
    return (ASUB_GrandStaircase_EXT_LOD1_C*)res;
}
