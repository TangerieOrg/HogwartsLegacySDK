#include "AHN_Lake_A_C.hpp"
#include "ALevelScriptActor.hpp"
AHN_Lake_A_C* AHN_Lake_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_Lake_A.HN_Lake_A_C");
    return (AHN_Lake_A_C*)res;
}
