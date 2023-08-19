#include "ALevelScriptActor.hpp"
#include "ASUB_Boathouse_STREAM_C.hpp"
ASUB_Boathouse_STREAM_C* ASUB_Boathouse_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Boathouse/SUB_Boathouse_STREAM_LvlInst_117.SUB_Boathouse_STREAM_C");
    return (ASUB_Boathouse_STREAM_C*)res;
}
