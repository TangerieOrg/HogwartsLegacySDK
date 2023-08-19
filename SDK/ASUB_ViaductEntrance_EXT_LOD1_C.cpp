#include "ALevelScriptActor.hpp"
#include "ASUB_ViaductEntrance_EXT_LOD1_C.hpp"
ASUB_ViaductEntrance_EXT_LOD1_C* ASUB_ViaductEntrance_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ViaductEntrance/SUB_ViaductEntrance_EXTLOD/SUB_ViaductEntrance_EXT_LOD1.SUB_ViaductEntrance_EXT_LOD1_C");
    return (ASUB_ViaductEntrance_EXT_LOD1_C*)res;
}
