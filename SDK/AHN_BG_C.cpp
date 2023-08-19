#include "AHN_BG_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BG_C* AHN_BG_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/HOG/HN_BG.HN_BG_C");
    return (AHN_BG_C*)res;
}
