#include "ALevelScriptActor.hpp"
#include "ASUB_EntranceHall_STREAM_C.hpp"
ASUB_EntranceHall_STREAM_C* ASUB_EntranceHall_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_EntranceHall/SUB_EntranceHall_STREAM_LvlInst_118.SUB_EntranceHall_STREAM_C");
    return (ASUB_EntranceHall_STREAM_C*)res;
}
