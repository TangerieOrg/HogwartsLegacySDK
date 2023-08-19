#include "ALevelScriptActor.hpp"
#include "ASUB_GrandStaircaseTower_STREAM_C.hpp"
ASUB_GrandStaircaseTower_STREAM_C* ASUB_GrandStaircaseTower_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_GrandStaircaseTower/SUB_GrandStaircaseTower_STREAM_LvlInst_120.SUB_GrandStaircaseTower_STREAM_C");
    return (ASUB_GrandStaircaseTower_STREAM_C*)res;
}
