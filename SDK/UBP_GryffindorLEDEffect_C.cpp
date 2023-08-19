#include "UBP_GryffindorLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_GryffindorLEDEffect_C* UBP_GryffindorLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/LEDEffects/BP_GryffindorLEDEffect.BP_GryffindorLEDEffect_C");
    return (UBP_GryffindorLEDEffect_C*)res;
}
