#include "AHN_BF_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BF_C* AHN_BF_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/HOG/HN_BF.HN_BF_C");
    return (AHN_BF_C*)res;
}
