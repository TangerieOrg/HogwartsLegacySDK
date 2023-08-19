#include "UBP_ExpelliarmusPrepLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_ExpelliarmusPrepLEDEffect_C* UBP_ExpelliarmusPrepLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Expelliarmus/LEDEffects/BP_ExpelliarmusPrepLEDEffect.BP_ExpelliarmusPrepLEDEffect_C");
    return (UBP_ExpelliarmusPrepLEDEffect_C*)res;
}
