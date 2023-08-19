#include "ALevelScriptActor.hpp"
#include "ASUB_GreatHall_STREAM_C.hpp"
ASUB_GreatHall_STREAM_C* ASUB_GreatHall_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_GreatHall/SUB_GreatHall_STREAM_LvlInst_122.SUB_GreatHall_STREAM_C");
    return (ASUB_GreatHall_STREAM_C*)res;
}
