#include "AHN_BG_Lighting_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BG_Lighting_C* AHN_BG_Lighting_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BG_Lighting.HN_BG_Lighting_C");
    return (AHN_BG_Lighting_C*)res;
}
