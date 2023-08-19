#include "ALevelScriptActor.hpp"
#include "ASUB_QuadCourtyard_STREAM_C.hpp"
ASUB_QuadCourtyard_STREAM_C* ASUB_QuadCourtyard_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_QuadCourtyard/SUB_QuadCourtyard_STREAM_LvlInst_149.SUB_QuadCourtyard_STREAM_C");
    return (ASUB_QuadCourtyard_STREAM_C*)res;
}
