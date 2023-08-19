#include "EComponentToUse.hpp"
#include "UActorProvider.hpp"
#include "UFunction.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_FromActor.hpp"
UTransform_FromActor* UTransform_FromActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_FromActor");
    return (UTransform_FromActor*)res;
}
void UTransform_FromActor::SetupFallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.Transform_FromActor.SetupFallback"));
    struct Params_SetupFallback {
    }; // Size: 0x0
    Params_SetupFallback params{};
    ProcessEvent(func, &params);
}
