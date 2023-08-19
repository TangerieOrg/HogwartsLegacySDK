#include "ALevelScriptActor.hpp"
#include "ASUB_ViaductCourtyard_STREAM_C.hpp"
ASUB_ViaductCourtyard_STREAM_C* ASUB_ViaductCourtyard_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ViaductCourtyard/SUB_ViaductCourtyard_STREAM_LvlInst_128.SUB_ViaductCourtyard_STREAM_C");
    return (ASUB_ViaductCourtyard_STREAM_C*)res;
}
