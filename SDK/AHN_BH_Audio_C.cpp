#include "AHN_BH_Audio_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BH_Audio_C* AHN_BH_Audio_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BH_Audio.HN_BH_Audio_C");
    return (AHN_BH_Audio_C*)res;
}
