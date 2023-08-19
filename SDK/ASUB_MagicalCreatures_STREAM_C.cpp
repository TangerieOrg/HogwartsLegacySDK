#include "ALevelScriptActor.hpp"
#include "ASUB_MagicalCreatures_STREAM_C.hpp"
ASUB_MagicalCreatures_STREAM_C* ASUB_MagicalCreatures_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_MagicalCreatures/SUB_MagicalCreatures_STREAM_LvlInst_144.SUB_MagicalCreatures_STREAM_C");
    return (ASUB_MagicalCreatures_STREAM_C*)res;
}
