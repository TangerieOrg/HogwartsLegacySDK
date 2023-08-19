#include "ALevelScriptActor.hpp"
#include "ASUB_QuadEastHall_STREAM_C.hpp"
ASUB_QuadEastHall_STREAM_C* ASUB_QuadEastHall_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_QuadEastHall/SUB_QuadEastHall_STREAM_LvlInst_150.SUB_QuadEastHall_STREAM_C");
    return (ASUB_QuadEastHall_STREAM_C*)res;
}
