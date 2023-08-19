#include "AHN_BG_VFX_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BG_VFX_C* AHN_BG_VFX_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BG_VFX.HN_BG_VFX_C");
    return (AHN_BG_VFX_C*)res;
}
