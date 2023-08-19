#include "ALevelScriptActor.hpp"
#include "ASUB_NorthHallBasement_STREAM_C.hpp"
ASUB_NorthHallBasement_STREAM_C* ASUB_NorthHallBasement_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_NorthHallBasement/SUB_NorthHallBasement_STREAM_LvlInst_158.SUB_NorthHallBasement_STREAM_C");
    return (ASUB_NorthHallBasement_STREAM_C*)res;
}
