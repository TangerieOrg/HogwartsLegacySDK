#include "ALevelScriptActor.hpp"
#include "ASUB_BoathouseStairway_STREAM_C.hpp"
ASUB_BoathouseStairway_STREAM_C* ASUB_BoathouseStairway_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_BoathouseStairway/SUB_BoathouseStairway_STREAM_LvlInst_116.SUB_BoathouseStairway_STREAM_C");
    return (ASUB_BoathouseStairway_STREAM_C*)res;
}
