#include "UBP_OppugnoPrepLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_OppugnoPrepLEDEffect_C* UBP_OppugnoPrepLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Oppugno/LEDEffects/BP_OppugnoPrepLEDEffect.BP_OppugnoPrepLEDEffect_C");
    return (UBP_OppugnoPrepLEDEffect_C*)res;
}
