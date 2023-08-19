#include "UBP_OppugnoStartLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_OppugnoStartLEDEffect_C* UBP_OppugnoStartLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Oppugno/LEDEffects/BP_OppugnoStartLEDEffect.BP_OppugnoStartLEDEffect_C");
    return (UBP_OppugnoStartLEDEffect_C*)res;
}
