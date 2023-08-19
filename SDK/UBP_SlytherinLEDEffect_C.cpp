#include "UBP_SlytherinLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_SlytherinLEDEffect_C* UBP_SlytherinLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/LEDEffects/BP_SlytherinLEDEffect.BP_SlytherinLEDEffect_C");
    return (UBP_SlytherinLEDEffect_C*)res;
}
