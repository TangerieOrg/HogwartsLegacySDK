#include "UBP_ConfrigoPrepLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_ConfrigoPrepLEDEffect_C* UBP_ConfrigoPrepLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Confringo/LEDEffects/BP_ConfrigoPrepLEDEffect.BP_ConfrigoPrepLEDEffect_C");
    return (UBP_ConfrigoPrepLEDEffect_C*)res;
}
