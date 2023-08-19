#include "UBP_AccioPrepLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_AccioPrepLEDEffect_C* UBP_AccioPrepLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Accio/LEDEffects/BP_AccioPrepLEDEffect.BP_AccioPrepLEDEffect_C");
    return (UBP_AccioPrepLEDEffect_C*)res;
}
