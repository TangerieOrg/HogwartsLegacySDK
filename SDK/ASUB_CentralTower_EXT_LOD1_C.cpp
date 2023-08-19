#include "ALevelScriptActor.hpp"
#include "ASUB_CentralTower_EXT_LOD1_C.hpp"
ASUB_CentralTower_EXT_LOD1_C* ASUB_CentralTower_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_CentralTower/SUB_CentralTower_EXTLOD/SUB_CentralTower_EXT_LOD1.SUB_CentralTower_EXT_LOD1_C");
    return (ASUB_CentralTower_EXT_LOD1_C*)res;
}
