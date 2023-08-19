#include "AHN_BI_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_BI_C* AHN_BI_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/HOG/HN_BI.HN_BI_C");
    return (AHN_BI_C*)res;
}
