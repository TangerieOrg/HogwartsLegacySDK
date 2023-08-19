#include "AHN_BH_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BH_C* AHN_BH_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/HOG/HN_BH.HN_BH_C");
    return (AHN_BH_C*)res;
}
