#include "ALevelScriptActor.hpp"
#include "ASUB_Greenhouses_STREAM_C.hpp"
ASUB_Greenhouses_STREAM_C* ASUB_Greenhouses_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Greenhouses/SUB_Greenhouses_STREAM_LvlInst_134.SUB_Greenhouses_STREAM_C");
    return (ASUB_Greenhouses_STREAM_C*)res;
}
