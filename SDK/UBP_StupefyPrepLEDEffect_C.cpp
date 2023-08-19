#include "UBP_StupefyPrepLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_StupefyPrepLEDEffect_C* UBP_StupefyPrepLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Stupefy/LEDEffects/BP_StupefyPrepLEDEffect.BP_StupefyPrepLEDEffect_C");
    return (UBP_StupefyPrepLEDEffect_C*)res;
}
