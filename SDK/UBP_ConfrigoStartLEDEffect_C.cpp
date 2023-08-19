#include "UBP_ConfrigoStartLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_ConfrigoStartLEDEffect_C* UBP_ConfrigoStartLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Confringo/LEDEffects/BP_ConfrigoStartLEDEffect.BP_ConfrigoStartLEDEffect_C");
    return (UBP_ConfrigoStartLEDEffect_C*)res;
}
