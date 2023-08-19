#include "ALevelScriptActor.hpp"
#include "ASUB_Kitchens_STREAM_C.hpp"
ASUB_Kitchens_STREAM_C* ASUB_Kitchens_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Kitchens/SUB_Kitchens_STREAM_LvlInst_125.SUB_Kitchens_STREAM_C");
    return (ASUB_Kitchens_STREAM_C*)res;
}
