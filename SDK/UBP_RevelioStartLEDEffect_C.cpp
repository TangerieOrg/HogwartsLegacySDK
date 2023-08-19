#include "UBP_RevelioStartLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_RevelioStartLEDEffect_C* UBP_RevelioStartLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Revelio/LEDEffects/BP_RevelioStartLEDEffect.BP_RevelioStartLEDEffect_C");
    return (UBP_RevelioStartLEDEffect_C*)res;
}
