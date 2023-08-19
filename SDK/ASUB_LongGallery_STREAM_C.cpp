#include "ALevelScriptActor.hpp"
#include "ASUB_LongGallery_STREAM_C.hpp"
ASUB_LongGallery_STREAM_C* ASUB_LongGallery_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_LongGallery/SUB_LongGallery_STREAM_LvlInst_157.SUB_LongGallery_STREAM_C");
    return (ASUB_LongGallery_STREAM_C*)res;
}
