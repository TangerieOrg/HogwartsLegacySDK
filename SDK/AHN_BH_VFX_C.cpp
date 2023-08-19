#include "AHN_BH_VFX_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BH_VFX_C* AHN_BH_VFX_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BH_VFX.HN_BH_VFX_C");
    return (AHN_BH_VFX_C*)res;
}
