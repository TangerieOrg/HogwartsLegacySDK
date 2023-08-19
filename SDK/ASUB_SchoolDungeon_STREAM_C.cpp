#include "ALevelScriptActor.hpp"
#include "ASUB_SchoolDungeon_STREAM_C.hpp"
ASUB_SchoolDungeon_STREAM_C* ASUB_SchoolDungeon_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_SchoolDungeon/SUB_SchoolDungeon_STREAM_LvlInst_156.SUB_SchoolDungeon_STREAM_C");
    return (ASUB_SchoolDungeon_STREAM_C*)res;
}
