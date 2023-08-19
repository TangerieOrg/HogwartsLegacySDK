#include "EWindSourceType.hpp"
#include "UFunction.hpp"
#include "UWindDirectionalSourceComponent.hpp"
#include "UWindSourceComponentBaseData.hpp"
UWindDirectionalSourceComponent* UWindDirectionalSourceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindDirectionalSourceComponent");
    return (UWindDirectionalSourceComponent*)res;
}
void UWindDirectionalSourceComponent::SetMaximumGustAmount(float InNewMaxGust) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindDirectionalSourceComponent.SetMaximumGustAmount"));
    struct Params_SetMaximumGustAmount {
        float InNewMaxGust; // 0x0
    }; // Size: 0x4
    Params_SetMaximumGustAmount params{};
    params.InNewMaxGust = (float)InNewMaxGust;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceComponent::SetWindType(EWindSourceType InNewType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindDirectionalSourceComponent.SetWindType"));
    struct Params_SetWindType {
        EWindSourceType InNewType; // 0x0
    }; // Size: 0x1
    Params_SetWindType params{};
    params.InNewType = (EWindSourceType)InNewType;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceComponent::SetStrength(float InNewStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindDirectionalSourceComponent.SetStrength"));
    struct Params_SetStrength {
        float InNewStrength; // 0x0
    }; // Size: 0x4
    Params_SetStrength params{};
    params.InNewStrength = (float)InNewStrength;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceComponent::SetUseScaleAsBounds(bool bNewUseScaleAsBounds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindDirectionalSourceComponent.SetUseScaleAsBounds"));
    struct Params_SetUseScaleAsBounds {
        bool bNewUseScaleAsBounds; // 0x0
    }; // Size: 0x1
    Params_SetUseScaleAsBounds params{};
    params.bNewUseScaleAsBounds = (bool)bNewUseScaleAsBounds;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceComponent::SetSpeed(float InNewSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindDirectionalSourceComponent.SetSpeed"));
    struct Params_SetSpeed {
        float InNewSpeed; // 0x0
    }; // Size: 0x4
    Params_SetSpeed params{};
    params.InNewSpeed = (float)InNewSpeed;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceComponent::SetRadius(float InNewRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindDirectionalSourceComponent.SetRadius"));
    struct Params_SetRadius {
        float InNewRadius; // 0x0
    }; // Size: 0x4
    Params_SetRadius params{};
    params.InNewRadius = (float)InNewRadius;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceComponent::SetMinimumGustAmount(float InNewMinGust) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindDirectionalSourceComponent.SetMinimumGustAmount"));
    struct Params_SetMinimumGustAmount {
        float InNewMinGust; // 0x0
    }; // Size: 0x4
    Params_SetMinimumGustAmount params{};
    params.InNewMinGust = (float)InNewMinGust;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceComponent::SetBlendDistance(float InNewBlendDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindDirectionalSourceComponent.SetBlendDistance"));
    struct Params_SetBlendDistance {
        float InNewBlendDistance; // 0x0
    }; // Size: 0x4
    Params_SetBlendDistance params{};
    params.InNewBlendDistance = (float)InNewBlendDistance;
    ProcessEvent(func, &params);
}
