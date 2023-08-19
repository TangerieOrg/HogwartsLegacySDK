#include "UBP_HufflepuffLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_HufflepuffLEDEffect_C* UBP_HufflepuffLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/LEDEffects/BP_HufflepuffLEDEffect.BP_HufflepuffLEDEffect_C");
    return (UBP_HufflepuffLEDEffect_C*)res;
}
