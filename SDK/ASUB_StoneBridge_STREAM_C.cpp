#include "ALevelScriptActor.hpp"
#include "ASUB_StoneBridge_STREAM_C.hpp"
ASUB_StoneBridge_STREAM_C* ASUB_StoneBridge_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_StoneBridge/SUB_StoneBridge_STREAM_LvlInst_159.SUB_StoneBridge_STREAM_C");
    return (ASUB_StoneBridge_STREAM_C*)res;
}
