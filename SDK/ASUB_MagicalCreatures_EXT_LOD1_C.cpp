#include "ALevelScriptActor.hpp"
#include "ASUB_MagicalCreatures_EXT_LOD1_C.hpp"
ASUB_MagicalCreatures_EXT_LOD1_C* ASUB_MagicalCreatures_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_MagicalCreatures/SUB_MagicalCreatures_EXTLOD/SUB_MagicalCreatures_EXT_LOD1.SUB_MagicalCreatures_EXT_LOD1_C");
    return (ASUB_MagicalCreatures_EXT_LOD1_C*)res;
}
