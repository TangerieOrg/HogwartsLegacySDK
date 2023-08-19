#include "UBP_WingardiumPrepLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_WingardiumPrepLEDEffect_C* UBP_WingardiumPrepLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Wingardium/LEDEffects/BP_WingardiumPrepLEDEffect.BP_WingardiumPrepLEDEffect_C");
    return (UBP_WingardiumPrepLEDEffect_C*)res;
}
