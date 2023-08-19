#include "ALevelScriptActor.hpp"
#include "ASUB_ViaductBridge_STREAM_C.hpp"
ASUB_ViaductBridge_STREAM_C* ASUB_ViaductBridge_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ViaductBridge/SUB_ViaductBridge_STREAM_LvlInst_160.SUB_ViaductBridge_STREAM_C");
    return (ASUB_ViaductBridge_STREAM_C*)res;
}
