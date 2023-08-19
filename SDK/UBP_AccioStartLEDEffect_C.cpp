#include "UBP_AccioStartLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_AccioStartLEDEffect_C* UBP_AccioStartLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Accio/LEDEffects/BP_AccioStartLEDEffect.BP_AccioStartLEDEffect_C");
    return (UBP_AccioStartLEDEffect_C*)res;
}
