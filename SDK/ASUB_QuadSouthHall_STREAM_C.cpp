#include "ALevelScriptActor.hpp"
#include "ASUB_QuadSouthHall_STREAM_C.hpp"
ASUB_QuadSouthHall_STREAM_C* ASUB_QuadSouthHall_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_QuadSouthHall/SUB_QuadSouthHall_STREAM_LvlInst_152.SUB_QuadSouthHall_STREAM_C");
    return (ASUB_QuadSouthHall_STREAM_C*)res;
}
