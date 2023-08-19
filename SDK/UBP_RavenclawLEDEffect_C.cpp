#include "UBP_RavenclawLEDEffect_C.hpp"
#include "ULEDFadeEffect.hpp"
UBP_RavenclawLEDEffect_C* UBP_RavenclawLEDEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/LEDEffects/BP_RavenclawLEDEffect.BP_RavenclawLEDEffect_C");
    return (UBP_RavenclawLEDEffect_C*)res;
}
