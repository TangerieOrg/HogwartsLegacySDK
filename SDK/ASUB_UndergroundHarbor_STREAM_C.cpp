#include "ALevelScriptActor.hpp"
#include "ASUB_UndergroundHarbor_STREAM_C.hpp"
ASUB_UndergroundHarbor_STREAM_C* ASUB_UndergroundHarbor_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_UndergroundHarbor/SUB_UndergroundHarbor_STREAM_LvlInst_127.SUB_UndergroundHarbor_STREAM_C");
    return (ASUB_UndergroundHarbor_STREAM_C*)res;
}
