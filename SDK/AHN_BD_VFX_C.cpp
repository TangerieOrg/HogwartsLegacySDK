#include "AHN_BD_VFX_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BD_VFX_C* AHN_BD_VFX_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BD_VFX.HN_BD_VFX_C");
    return (AHN_BD_VFX_C*)res;
}
