#include "UFunction.hpp"
#include "UWindAlignComponent.hpp"
#include "UWindSourceComponentBase.hpp"
UWindAlignComponent* UWindAlignComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindAlignComponent");
    return (UWindAlignComponent*)res;
}
void UWindAlignComponent::SetBidirectional(bool bInNewBidirectional) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindAlignComponent.SetBidirectional"));
    struct Params_SetBidirectional {
        bool bInNewBidirectional; // 0x0
    }; // Size: 0x1
    Params_SetBidirectional params{};
    params.bInNewBidirectional = (bool)bInNewBidirectional;
    ProcessEvent(func, &params);
}
void UWindAlignComponent::SetTransitionDistance(float InTransitionDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindAlignComponent.SetTransitionDistance"));
    struct Params_SetTransitionDistance {
        float InTransitionDistance; // 0x0
    }; // Size: 0x4
    Params_SetTransitionDistance params{};
    params.InTransitionDistance = (float)InTransitionDistance;
    ProcessEvent(func, &params);
}
void UWindAlignComponent::SetPriority(float InNewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindAlignComponent.SetPriority"));
    struct Params_SetPriority {
        float InNewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.InNewPriority = (float)InNewPriority;
    ProcessEvent(func, &params);
}
void UWindAlignComponent::SetSpeedMod(float InNewSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindAlignComponent.SetSpeedMod"));
    struct Params_SetSpeedMod {
        float InNewSpeed; // 0x0
    }; // Size: 0x4
    Params_SetSpeedMod params{};
    params.InNewSpeed = (float)InNewSpeed;
    ProcessEvent(func, &params);
}
void UWindAlignComponent::SetStrength(float InNewStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindAlignComponent.SetStrength"));
    struct Params_SetStrength {
        float InNewStrength; // 0x0
    }; // Size: 0x4
    Params_SetStrength params{};
    params.InNewStrength = (float)InNewStrength;
    ProcessEvent(func, &params);
}
void UWindAlignComponent::SetOutdoors(float InNewOutdoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindAlignComponent.SetOutdoors"));
    struct Params_SetOutdoors {
        float InNewOutdoors; // 0x0
    }; // Size: 0x4
    Params_SetOutdoors params{};
    params.InNewOutdoors = (float)InNewOutdoors;
    ProcessEvent(func, &params);
}
