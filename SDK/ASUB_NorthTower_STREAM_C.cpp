#include "ALevelScriptActor.hpp"
#include "ASUB_NorthTower_STREAM_C.hpp"
ASUB_NorthTower_STREAM_C* ASUB_NorthTower_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_NorthTower/SUB_NorthTower_STREAM_LvlInst_146.SUB_NorthTower_STREAM_C");
    return (ASUB_NorthTower_STREAM_C*)res;
}
