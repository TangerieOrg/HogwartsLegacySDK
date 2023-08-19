#include "ALevelScriptActor.hpp"
#include "ASUB_ClockTowerCourtyard_STREAM_C.hpp"
ASUB_ClockTowerCourtyard_STREAM_C* ASUB_ClockTowerCourtyard_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ClockTowerCourtyard/SUB_ClockTowerCourtyard_STREAM_LvlInst_136.SUB_ClockTowerCourtyard_STREAM_C");
    return (ASUB_ClockTowerCourtyard_STREAM_C*)res;
}
