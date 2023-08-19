#include "ALevelScriptActor.hpp"
#include "ASUB_ViaductEntrance_STREAM_C.hpp"
ASUB_ViaductEntrance_STREAM_C* ASUB_ViaductEntrance_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_ViaductEntrance/SUB_ViaductEntrance_STREAM_LvlInst_154.SUB_ViaductEntrance_STREAM_C");
    return (ASUB_ViaductEntrance_STREAM_C*)res;
}
