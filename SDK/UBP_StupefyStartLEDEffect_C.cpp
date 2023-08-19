#include "UBP_StupefyStartLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_StupefyStartLEDEffect_C* UBP_StupefyStartLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Stupefy/LEDEffects/BP_StupefyStartLEDEffect.BP_StupefyStartLEDEffect_C");
    return (UBP_StupefyStartLEDEffect_C*)res;
}
