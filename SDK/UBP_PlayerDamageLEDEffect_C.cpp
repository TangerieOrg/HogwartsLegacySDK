#include "UBP_PlayerDamageLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_PlayerDamageLEDEffect_C* UBP_PlayerDamageLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/LEDEffects/BP_PlayerDamageLEDEffect.BP_PlayerDamageLEDEffect_C");
    return (UBP_PlayerDamageLEDEffect_C*)res;
}
