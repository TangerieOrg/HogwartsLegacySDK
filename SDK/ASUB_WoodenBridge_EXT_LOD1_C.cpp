#include "ALevelScriptActor.hpp"
#include "ASUB_WoodenBridge_EXT_LOD1_C.hpp"
ASUB_WoodenBridge_EXT_LOD1_C* ASUB_WoodenBridge_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_WoodenBridge/SUB_WoodenBridge_EXTLOD/SUB_WoodenBridge_EXT_LOD1.SUB_WoodenBridge_EXT_LOD1_C");
    return (ASUB_WoodenBridge_EXT_LOD1_C*)res;
}
