#include "UFunction.hpp"
#include "UWindPointSourceComponent.hpp"
#include "UWindSourceComponentBaseData.hpp"
void UWindPointSourceComponent::SetRadius(float InNewRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindPointSourceComponent.SetRadius"));
    struct Params_SetRadius {
        float InNewRadius; // 0x0
    }; // Size: 0x4
    Params_SetRadius params{};
    params.InNewRadius = (float)InNewRadius;
    ProcessEvent(func, &params);
}
UWindPointSourceComponent* UWindPointSourceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindPointSourceComponent");
    return (UWindPointSourceComponent*)res;
}
void UWindPointSourceComponent::SetStrength(float InNewStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindPointSourceComponent.SetStrength"));
    struct Params_SetStrength {
        float InNewStrength; // 0x0
    }; // Size: 0x4
    Params_SetStrength params{};
    params.InNewStrength = (float)InNewStrength;
    ProcessEvent(func, &params);
}
void UWindPointSourceComponent::SetInnerRadius(float InNewInnerRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindPointSourceComponent.SetInnerRadius"));
    struct Params_SetInnerRadius {
        float InNewInnerRadius; // 0x0
    }; // Size: 0x4
    Params_SetInnerRadius params{};
    params.InNewInnerRadius = (float)InNewInnerRadius;
    ProcessEvent(func, &params);
}
void UWindPointSourceComponent::SetSpeed(float InNewSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.WindPointSourceComponent.SetSpeed"));
    struct Params_SetSpeed {
        float InNewSpeed; // 0x0
    }; // Size: 0x4
    Params_SetSpeed params{};
    params.InNewSpeed = (float)InNewSpeed;
    ProcessEvent(func, &params);
}
