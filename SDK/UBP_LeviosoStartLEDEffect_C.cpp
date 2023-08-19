#include "UBP_LeviosoStartLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_LeviosoStartLEDEffect_C* UBP_LeviosoStartLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Levioso/LEDEffects/BP_LeviosoStartLEDEffect.BP_LeviosoStartLEDEffect_C");
    return (UBP_LeviosoStartLEDEffect_C*)res;
}
