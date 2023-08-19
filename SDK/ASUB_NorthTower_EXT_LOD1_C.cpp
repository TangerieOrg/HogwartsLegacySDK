#include "ALevelScriptActor.hpp"
#include "ASUB_NorthTower_EXT_LOD1_C.hpp"
ASUB_NorthTower_EXT_LOD1_C* ASUB_NorthTower_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_NorthTower/SUB_NorthTower_EXTLOD/SUB_NorthTower_EXT_LOD1.SUB_NorthTower_EXT_LOD1_C");
    return (ASUB_NorthTower_EXT_LOD1_C*)res;
}
