#include "AFO_AU_Castle_EXT_LOD1_C.hpp"
#include "ALevelScriptActor.hpp"
AFO_AU_Castle_EXT_LOD1_C* AFO_AU_Castle_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/FO_AU_Castle_EXTLOD/FO_AU_Castle_EXT_LOD1.FO_AU_Castle_EXT_LOD1_C");
    return (AFO_AU_Castle_EXT_LOD1_C*)res;
}
