#include "ALevelScriptActor.hpp"
#include "ASUB_Library_EXT_LOD1_C.hpp"
ASUB_Library_EXT_LOD1_C* ASUB_Library_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Library/SUB_Library_EXTLOD/SUB_Library_EXT_LOD1.SUB_Library_EXT_LOD1_C");
    return (ASUB_Library_EXT_LOD1_C*)res;
}
