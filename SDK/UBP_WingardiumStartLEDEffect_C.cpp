#include "UBP_WingardiumStartLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_WingardiumStartLEDEffect_C* UBP_WingardiumStartLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Wingardium/LEDEffects/BP_WingardiumStartLEDEffect.BP_WingardiumStartLEDEffect_C");
    return (UBP_WingardiumStartLEDEffect_C*)res;
}
