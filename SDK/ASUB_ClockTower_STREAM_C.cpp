#include "ALevelScriptActor.hpp"
#include "ASUB_ClockTower_STREAM_C.hpp"
ASUB_ClockTower_STREAM_C* ASUB_ClockTower_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ClockTower/SUB_ClockTower_STREAM_LvlInst_135.SUB_ClockTower_STREAM_C");
    return (ASUB_ClockTower_STREAM_C*)res;
}
