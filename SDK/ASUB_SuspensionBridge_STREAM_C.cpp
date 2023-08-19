#include "ALevelScriptActor.hpp"
#include "ASUB_SuspensionBridge_STREAM_C.hpp"
ASUB_SuspensionBridge_STREAM_C* ASUB_SuspensionBridge_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_SuspensionBridge/SUB_SuspensionBridge_STREAM_LvlInst_153.SUB_SuspensionBridge_STREAM_C");
    return (ASUB_SuspensionBridge_STREAM_C*)res;
}
