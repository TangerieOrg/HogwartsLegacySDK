#include "ALevelScriptActor.hpp"
#include "ASUB_NorthHall_STREAM_C.hpp"
ASUB_NorthHall_STREAM_C* ASUB_NorthHall_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_NorthHall/SUB_NorthHall_STREAM_LvlInst_145.SUB_NorthHall_STREAM_C");
    return (ASUB_NorthHall_STREAM_C*)res;
}
