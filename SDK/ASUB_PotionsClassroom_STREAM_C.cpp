#include "ALevelScriptActor.hpp"
#include "ASUB_PotionsClassroom_STREAM_C.hpp"
ASUB_PotionsClassroom_STREAM_C* ASUB_PotionsClassroom_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_PotionsClassroom/SUB_PotionsClassroom_STREAM_LvlInst_148.SUB_PotionsClassroom_STREAM_C");
    return (ASUB_PotionsClassroom_STREAM_C*)res;
}
