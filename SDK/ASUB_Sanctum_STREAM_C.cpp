#include "ALevelScriptActor.hpp"
#include "ASUB_Sanctum_STREAM_C.hpp"
ASUB_Sanctum_STREAM_C* ASUB_Sanctum_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Sanctum/SUB_Sanctum_STREAM_LvlInst_141.SUB_Sanctum_STREAM_C");
    return (ASUB_Sanctum_STREAM_C*)res;
}
