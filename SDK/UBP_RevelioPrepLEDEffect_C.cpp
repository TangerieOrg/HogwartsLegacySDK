#include "UBP_RevelioPrepLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_RevelioPrepLEDEffect_C* UBP_RevelioPrepLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Revelio/LEDEffects/BP_RevelioPrepLEDEffect.BP_RevelioPrepLEDEffect_C");
    return (UBP_RevelioPrepLEDEffect_C*)res;
}
