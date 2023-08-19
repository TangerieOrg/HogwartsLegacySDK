#include "ALevelScriptActor.hpp"
#include "ASUB_GrandStaircase_Master_STREAM_C.hpp"
ASUB_GrandStaircase_Master_STREAM_C* ASUB_GrandStaircase_Master_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_GrandStaircaseTower/SUB_GrandStaircase_Master_STREAM_LvlInst_121.SUB_GrandStaircase_Master_STREAM_C");
    return (ASUB_GrandStaircase_Master_STREAM_C*)res;
}
