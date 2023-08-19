#include "UBP_ExpelliarmusStartLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_ExpelliarmusStartLEDEffect_C* UBP_ExpelliarmusStartLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Expelliarmus/LEDEffects/BP_ExpelliarmusStartLEDEffect.BP_ExpelliarmusStartLEDEffect_C");
    return (UBP_ExpelliarmusStartLEDEffect_C*)res;
}
