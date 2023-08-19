#include "ESanctuaryIdentity.hpp"
#include "FEphemerisComputer.hpp"
#include "FTimeController.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USanctuaryLightingIdentityMasterComponent.hpp"
USanctuaryLightingIdentityMasterComponent* USanctuaryLightingIdentityMasterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryLightingIdentityMasterComponent");
    return (USanctuaryLightingIdentityMasterComponent*)res;
}
void USanctuaryLightingIdentityMasterComponent::SetIdentity(ESanctuaryIdentity InNewIdentity, float InBlendDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryLightingIdentityMasterComponent.SetIdentity"));
    struct Params_SetIdentity {
        ESanctuaryIdentity InNewIdentity; // 0x0
        char pad_1[0x3];
        float InBlendDuration; // 0x4
    }; // Size: 0x8
    Params_SetIdentity params{};
    params.InNewIdentity = (ESanctuaryIdentity)InNewIdentity;
    params.InBlendDuration = (float)InBlendDuration;
    ProcessEvent(func, &params);
}
ESanctuaryIdentity USanctuaryLightingIdentityMasterComponent::GetPreviousIdentity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryLightingIdentityMasterComponent.GetPreviousIdentity"));
    struct Params_GetPreviousIdentity {
        ESanctuaryIdentity ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPreviousIdentity params{};
    ProcessEvent(func, &params);
    return (ESanctuaryIdentity)params.ReturnValue;
}
USanctuaryLightingIdentityMasterComponent* USanctuaryLightingIdentityMasterComponent::GetLightingIdentityMaster(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryLightingIdentityMasterComponent.GetLightingIdentityMaster"));
    struct Params_GetLightingIdentityMaster {
        UObject* WorldContextObject; // 0x0
        USanctuaryLightingIdentityMasterComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLightingIdentityMaster params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (USanctuaryLightingIdentityMasterComponent*)params.ReturnValue;
}
float USanctuaryLightingIdentityMasterComponent::GetIdentityBlendWeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryLightingIdentityMasterComponent.GetIdentityBlendWeight"));
    struct Params_GetIdentityBlendWeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetIdentityBlendWeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ESanctuaryIdentity USanctuaryLightingIdentityMasterComponent::GetCurrentIdentity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryLightingIdentityMasterComponent.GetCurrentIdentity"));
    struct Params_GetCurrentIdentity {
        ESanctuaryIdentity ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentIdentity params{};
    ProcessEvent(func, &params);
    return (ESanctuaryIdentity)params.ReturnValue;
}
