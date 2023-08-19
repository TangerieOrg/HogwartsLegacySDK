#include "ALevelScriptActor.hpp"
#include "ASUB_WestHall_STREAM_C.hpp"
ASUB_WestHall_STREAM_C* ASUB_WestHall_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_WestHall/SUB_WestHall_STREAM_LvlInst_143.SUB_WestHall_STREAM_C");
    return (ASUB_WestHall_STREAM_C*)res;
}
