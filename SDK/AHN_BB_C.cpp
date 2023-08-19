#include "AHN_BB_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BB_C* AHN_BB_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/HOG/HN_BB.HN_BB_C");
    return (AHN_BB_C*)res;
}
