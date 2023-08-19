#include "UFunction.hpp"
#include "UWindDeflectorComponent.hpp"
#include "UWindSourceComponentBase.hpp"
void UWindDeflectorComponent::SetOutdoors(float InNewOutdoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDeflectorComponent.SetOutdoors"));
    struct Params_SetOutdoors {
        float InNewOutdoors; // 0x0
    }; // Size: 0x4
    Params_SetOutdoors params{};
    params.InNewOutdoors = (float)InNewOutdoors;
    ProcessEvent(func, &params);
}
UWindDeflectorComponent* UWindDeflectorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindDeflectorComponent");
    return (UWindDeflectorComponent*)res;
}
void UWindDeflectorComponent::SetStrength(float InNewStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDeflectorComponent.SetStrength"));
    struct Params_SetStrength {
        float InNewStrength; // 0x0
    }; // Size: 0x4
    Params_SetStrength params{};
    params.InNewStrength = (float)InNewStrength;
    ProcessEvent(func, &params);
}
void UWindDeflectorComponent::SetTransitionDistanceAlongDirection(float InNewTransitionDistanceAlongDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDeflectorComponent.SetTransitionDistanceAlongDirection"));
    struct Params_SetTransitionDistanceAlongDirection {
        float InNewTransitionDistanceAlongDirection; // 0x0
    }; // Size: 0x4
    Params_SetTransitionDistanceAlongDirection params{};
    params.InNewTransitionDistanceAlongDirection = (float)InNewTransitionDistanceAlongDirection;
    ProcessEvent(func, &params);
}
void UWindDeflectorComponent::SetPriority(float InNewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDeflectorComponent.SetPriority"));
    struct Params_SetPriority {
        float InNewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.InNewPriority = (float)InNewPriority;
    ProcessEvent(func, &params);
}
void UWindDeflectorComponent::SetSpeedMod(float InNewSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDeflectorComponent.SetSpeedMod"));
    struct Params_SetSpeedMod {
        float InNewSpeed; // 0x0
    }; // Size: 0x4
    Params_SetSpeedMod params{};
    params.InNewSpeed = (float)InNewSpeed;
    ProcessEvent(func, &params);
}
void UWindDeflectorComponent::SetFullEffectAlongNormal(float InNewFullEffectAlongNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDeflectorComponent.SetFullEffectAlongNormal"));
    struct Params_SetFullEffectAlongNormal {
        float InNewFullEffectAlongNormal; // 0x0
    }; // Size: 0x4
    Params_SetFullEffectAlongNormal params{};
    params.InNewFullEffectAlongNormal = (float)InNewFullEffectAlongNormal;
    ProcessEvent(func, &params);
}
void UWindDeflectorComponent::SetFlipNormal(bool bInNewFlipNormal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDeflectorComponent.SetFlipNormal"));
    struct Params_SetFlipNormal {
        bool bInNewFlipNormal; // 0x0
    }; // Size: 0x1
    Params_SetFlipNormal params{};
    params.bInNewFlipNormal = (bool)bInNewFlipNormal;
    ProcessEvent(func, &params);
}
void UWindDeflectorComponent::SetBidirectional(bool bInNewBidirectional) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDeflectorComponent.SetBidirectional"));
    struct Params_SetBidirectional {
        bool bInNewBidirectional; // 0x0
    }; // Size: 0x1
    Params_SetBidirectional params{};
    params.bInNewBidirectional = (bool)bInNewBidirectional;
    ProcessEvent(func, &params);
}
