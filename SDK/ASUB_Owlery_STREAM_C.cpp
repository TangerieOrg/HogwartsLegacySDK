#include "ALevelScriptActor.hpp"
#include "ASUB_Owlery_STREAM_C.hpp"
ASUB_Owlery_STREAM_C* ASUB_Owlery_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Owlery/SUB_Owlery_STREAM_LvlInst_147.SUB_Owlery_STREAM_C");
    return (ASUB_Owlery_STREAM_C*)res;
}
