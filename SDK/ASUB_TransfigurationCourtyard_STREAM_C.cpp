#include "ALevelScriptActor.hpp"
#include "ASUB_TransfigurationCourtyard_STREAM_C.hpp"
ASUB_TransfigurationCourtyard_STREAM_C* ASUB_TransfigurationCourtyard_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_TransfigurationCourtyard/SUB_TransfigurationCourtyard_STREAM_LvlInst_142.SUB_TransfigurationCourtyard_STREAM_C");
    return (ASUB_TransfigurationCourtyard_STREAM_C*)res;
}
