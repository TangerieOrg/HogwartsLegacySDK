#include "ALevelScriptActor.hpp"
#include "ASUB_BellTowers_EXT_LOD1_C.hpp"
ASUB_BellTowers_EXT_LOD1_C* ASUB_BellTowers_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_BellTowers/SUB_BellTowers_EXTLOD/SUB_BellTowers_EXT_LOD1.SUB_BellTowers_EXT_LOD1_C");
    return (ASUB_BellTowers_EXT_LOD1_C*)res;
}
