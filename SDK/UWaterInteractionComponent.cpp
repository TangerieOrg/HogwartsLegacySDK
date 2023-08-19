#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UWaterInteractionComponent.hpp"
UWaterInteractionComponent* UWaterInteractionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.WaterInteractionComponent");
    return (UWaterInteractionComponent*)res;
}
void UWaterInteractionComponent::WakeUp(bool bEnableForWater) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.WaterInteractionComponent.WakeUp"));
    struct Params_WakeUp {
        bool bEnableForWater; // 0x0
    }; // Size: 0x1
    Params_WakeUp params{};
    params.bEnableForWater = (bool)bEnableForWater;
    ProcessEvent(func, &params);
}
void UWaterInteractionComponent::Sleep() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.WaterInteractionComponent.Sleep"));
    struct Params_Sleep {
    }; // Size: 0x0
    Params_Sleep params{};
    ProcessEvent(func, &params);
}
