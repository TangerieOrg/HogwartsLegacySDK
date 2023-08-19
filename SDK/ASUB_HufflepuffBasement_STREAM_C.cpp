#include "ALevelScriptActor.hpp"
#include "ASUB_HufflepuffBasement_STREAM_C.hpp"
ASUB_HufflepuffBasement_STREAM_C* ASUB_HufflepuffBasement_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_HufflepuffBasement/SUB_HufflepuffBasement_STREAM_LvlInst_124.SUB_HufflepuffBasement_STREAM_C");
    return (ASUB_HufflepuffBasement_STREAM_C*)res;
}
