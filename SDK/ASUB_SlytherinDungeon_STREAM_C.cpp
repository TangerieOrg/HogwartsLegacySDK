#include "ALevelScriptActor.hpp"
#include "ASUB_SlytherinDungeon_STREAM_C.hpp"
ASUB_SlytherinDungeon_STREAM_C* ASUB_SlytherinDungeon_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_SlytherinDungeon/SUB_SlytherinDungeon_STREAM_LvlInst_126.SUB_SlytherinDungeon_STREAM_C");
    return (ASUB_SlytherinDungeon_STREAM_C*)res;
}
