#include "ALevelScriptActor.hpp"
#include "ASUB_BellTowers_STREAM_C.hpp"
ASUB_BellTowers_STREAM_C* ASUB_BellTowers_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_BellTowers/SUB_BellTowers_STREAM_LvlInst_131.SUB_BellTowers_STREAM_C");
    return (ASUB_BellTowers_STREAM_C*)res;
}
