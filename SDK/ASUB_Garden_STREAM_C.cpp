#include "ALevelScriptActor.hpp"
#include "ASUB_Garden_STREAM_C.hpp"
ASUB_Garden_STREAM_C* ASUB_Garden_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Garden/SUB_Garden_STREAM_LvlInst_119.SUB_Garden_STREAM_C");
    return (ASUB_Garden_STREAM_C*)res;
}
