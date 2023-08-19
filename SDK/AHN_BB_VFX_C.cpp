#include "AHN_BB_VFX_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BB_VFX_C* AHN_BB_VFX_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BB_VFX.HN_BB_VFX_C");
    return (AHN_BB_VFX_C*)res;
}
