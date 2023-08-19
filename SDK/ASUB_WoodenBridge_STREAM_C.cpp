#include "ALevelScriptActor.hpp"
#include "ASUB_WoodenBridge_STREAM_C.hpp"
ASUB_WoodenBridge_STREAM_C* ASUB_WoodenBridge_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_WoodenBridge/SUB_WoodenBridge_STREAM_LvlInst_155.SUB_WoodenBridge_STREAM_C");
    return (ASUB_WoodenBridge_STREAM_C*)res;
}
