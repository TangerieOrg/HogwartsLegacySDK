#include "UBP_LeviosoPrepLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_LeviosoPrepLEDEffect_C* UBP_LeviosoPrepLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Levioso/LEDEffects/BP_LeviosoPrepLEDEffect.BP_LeviosoPrepLEDEffect_C");
    return (UBP_LeviosoPrepLEDEffect_C*)res;
}
