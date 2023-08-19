#include "ALevelScriptActor.hpp"
#include "ASUB_CentralTower_STREAM_C.hpp"
ASUB_CentralTower_STREAM_C* ASUB_CentralTower_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_CentralTower/SUB_CentralTower_STREAM_LvlInst_132.SUB_CentralTower_STREAM_C");
    return (ASUB_CentralTower_STREAM_C*)res;
}
