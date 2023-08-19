#include "UBP_OppugnoEndLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_OppugnoEndLEDEffect_C* UBP_OppugnoEndLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Oppugno/LEDEffects/BP_OppugnoEndLEDEffect.BP_OppugnoEndLEDEffect_C");
    return (UBP_OppugnoEndLEDEffect_C*)res;
}
