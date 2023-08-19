#include "UFunction.hpp"
#include "UMaterialPropertyData.hpp"
#include "UStateEffectComponent.hpp"
#include "UWetnessComponent.hpp"
UWetnessComponent* UWetnessComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WetnessComponent");
    return (UWetnessComponent*)res;
}
void UWetnessComponent::SetInWater(bool inWater) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WetnessComponent.SetInWater"));
    struct Params_SetInWater {
        bool inWater; // 0x0
    }; // Size: 0x1
    Params_SetInWater params{};
    params.inWater = (bool)inWater;
    ProcessEvent(func, &params);
}
