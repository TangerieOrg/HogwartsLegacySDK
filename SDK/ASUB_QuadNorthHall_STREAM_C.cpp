#include "ALevelScriptActor.hpp"
#include "ASUB_QuadNorthHall_STREAM_C.hpp"
ASUB_QuadNorthHall_STREAM_C* ASUB_QuadNorthHall_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_QuadNorthHall/SUB_QuadNorthHall_STREAM_LvlInst_151.SUB_QuadNorthHall_STREAM_C");
    return (ASUB_QuadNorthHall_STREAM_C*)res;
}
