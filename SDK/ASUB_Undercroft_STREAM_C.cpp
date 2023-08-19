#include "ALevelScriptActor.hpp"
#include "ASUB_Undercroft_STREAM_C.hpp"
ASUB_Undercroft_STREAM_C* ASUB_Undercroft_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Undercroft/SUB_Undercroft_STREAM_LvlInst_165.SUB_Undercroft_STREAM_C");
    return (ASUB_Undercroft_STREAM_C*)res;
}
