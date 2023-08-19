#include "ALevelScriptActor.hpp"
#include "ASUB_Library_Master_STREAM_C.hpp"
ASUB_Library_Master_STREAM_C* ASUB_Library_Master_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Library/SUB_Library_Master_STREAM_LvlInst_140.SUB_Library_Master_STREAM_C");
    return (ASUB_Library_Master_STREAM_C*)res;
}
