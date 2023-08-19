#include "UFunction.hpp"
#include "UWindModulateComponent.hpp"
#include "UWindSourceComponentBase.hpp"
void UWindModulateComponent::SetSpeedMod(float InNewSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetSpeedMod"));
    struct Params_SetSpeedMod {
        float InNewSpeed; // 0x0
    }; // Size: 0x4
    Params_SetSpeedMod params{};
    params.InNewSpeed = (float)InNewSpeed;
    ProcessEvent(func, &params);
}
UWindModulateComponent* UWindModulateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindModulateComponent");
    return (UWindModulateComponent*)res;
}
void UWindModulateComponent::SetPriority(float InNewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetPriority"));
    struct Params_SetPriority {
        float InNewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.InNewPriority = (float)InNewPriority;
    ProcessEvent(func, &params);
}
void UWindModulateComponent::SetStrength(float InNewStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetStrength"));
    struct Params_SetStrength {
        float InNewStrength; // 0x0
    }; // Size: 0x4
    Params_SetStrength params{};
    params.InNewStrength = (float)InNewStrength;
    ProcessEvent(func, &params);
}
void UWindModulateComponent::SetUseScaleAsBounds(bool bNewUseScaleAsBounds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetUseScaleAsBounds"));
    struct Params_SetUseScaleAsBounds {
        bool bNewUseScaleAsBounds; // 0x0
    }; // Size: 0x1
    Params_SetUseScaleAsBounds params{};
    params.bNewUseScaleAsBounds = (bool)bNewUseScaleAsBounds;
    ProcessEvent(func, &params);
}
void UWindModulateComponent::SetOutdoors(float InNewOutdoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetOutdoors"));
    struct Params_SetOutdoors {
        float InNewOutdoors; // 0x0
    }; // Size: 0x4
    Params_SetOutdoors params{};
    params.InNewOutdoors = (float)InNewOutdoors;
    ProcessEvent(func, &params);
}
void UWindModulateComponent::SetMinimumGustMod(float InNewMinGustMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetMinimumGustMod"));
    struct Params_SetMinimumGustMod {
        float InNewMinGustMod; // 0x0
    }; // Size: 0x4
    Params_SetMinimumGustMod params{};
    params.InNewMinGustMod = (float)InNewMinGustMod;
    ProcessEvent(func, &params);
}
void UWindModulateComponent::SetMaximumGustMod(float InNewMaxGustMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetMaximumGustMod"));
    struct Params_SetMaximumGustMod {
        float InNewMaxGustMod; // 0x0
    }; // Size: 0x4
    Params_SetMaximumGustMod params{};
    params.InNewMaxGustMod = (float)InNewMaxGustMod;
    ProcessEvent(func, &params);
}
void UWindModulateComponent::SetBlendDistance(float InNewBlendDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetBlendDistance"));
    struct Params_SetBlendDistance {
        float InNewBlendDistance; // 0x0
    }; // Size: 0x4
    Params_SetBlendDistance params{};
    params.InNewBlendDistance = (float)InNewBlendDistance;
    ProcessEvent(func, &params);
}
void UWindModulateComponent::SetAffectWindDirection(bool bNewAffectWindDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindModulateComponent.SetAffectWindDirection"));
    struct Params_SetAffectWindDirection {
        bool bNewAffectWindDirection; // 0x0
    }; // Size: 0x1
    Params_SetAffectWindDirection params{};
    params.bNewAffectWindDirection = (bool)bNewAffectWindDirection;
    ProcessEvent(func, &params);
}
