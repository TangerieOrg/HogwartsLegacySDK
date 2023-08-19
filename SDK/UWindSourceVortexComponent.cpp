#include "EWindVortexEnvelopeAffects.hpp"
#include "UFunction.hpp"
#include "UWindEnvelopeController.hpp"
#include "UWindSourceComponentBaseData.hpp"
#include "UWindSourceVortexComponent.hpp"
void UWindSourceVortexComponent::SetEnvelopeAffects(EWindVortexEnvelopeAffects InNewEnvelopeAffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.SetEnvelopeAffects"));
    struct Params_SetEnvelopeAffects {
        EWindVortexEnvelopeAffects InNewEnvelopeAffects; // 0x0
    }; // Size: 0x1
    Params_SetEnvelopeAffects params{};
    params.InNewEnvelopeAffects = (EWindVortexEnvelopeAffects)InNewEnvelopeAffects;
    ProcessEvent(func, &params);
}
void UWindSourceVortexComponent::SetRadius(float InNewRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.SetRadius"));
    struct Params_SetRadius {
        float InNewRadius; // 0x0
    }; // Size: 0x4
    Params_SetRadius params{};
    params.InNewRadius = (float)InNewRadius;
    ProcessEvent(func, &params);
}
UWindSourceVortexComponent* UWindSourceVortexComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindSourceVortexComponent");
    return (UWindSourceVortexComponent*)res;
}
void UWindSourceVortexComponent::ClearEnvelopeAffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.ClearEnvelopeAffects"));
    struct Params_ClearEnvelopeAffects {
    }; // Size: 0x0
    Params_ClearEnvelopeAffects params{};
    ProcessEvent(func, &params);
}
void UWindSourceVortexComponent::SetStrength(float InNewStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.SetStrength"));
    struct Params_SetStrength {
        float InNewStrength; // 0x0
    }; // Size: 0x4
    Params_SetStrength params{};
    params.InNewStrength = (float)InNewStrength;
    ProcessEvent(func, &params);
}
void UWindSourceVortexComponent::UnsetEnvelopeAffects(EWindVortexEnvelopeAffects InNewEnvelopeAffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.UnsetEnvelopeAffects"));
    struct Params_UnsetEnvelopeAffects {
        EWindVortexEnvelopeAffects InNewEnvelopeAffects; // 0x0
    }; // Size: 0x1
    Params_UnsetEnvelopeAffects params{};
    params.InNewEnvelopeAffects = (EWindVortexEnvelopeAffects)InNewEnvelopeAffects;
    ProcessEvent(func, &params);
}
void UWindSourceVortexComponent::TestEnvelopeAffects(EWindVortexEnvelopeAffects InNewEnvelopeAffects, bool& bIsSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.TestEnvelopeAffects"));
    struct Params_TestEnvelopeAffects {
        EWindVortexEnvelopeAffects InNewEnvelopeAffects; // 0x0
        bool bIsSet; // 0x1
    }; // Size: 0x2
    Params_TestEnvelopeAffects params{};
    params.InNewEnvelopeAffects = (EWindVortexEnvelopeAffects)InNewEnvelopeAffects;
    params.bIsSet = (bool)bIsSet;
    ProcessEvent(func, &params);
    bIsSet = params.bIsSet;
}
void UWindSourceVortexComponent::SetInnerRadius(float InNewInnerRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.SetInnerRadius"));
    struct Params_SetInnerRadius {
        float InNewInnerRadius; // 0x0
    }; // Size: 0x4
    Params_SetInnerRadius params{};
    params.InNewInnerRadius = (float)InNewInnerRadius;
    ProcessEvent(func, &params);
}
void UWindSourceVortexComponent::SetSpeed(float InNewSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.SetSpeed"));
    struct Params_SetSpeed {
        float InNewSpeed; // 0x0
    }; // Size: 0x4
    Params_SetSpeed params{};
    params.InNewSpeed = (float)InNewSpeed;
    ProcessEvent(func, &params);
}
void UWindSourceVortexComponent::SetHeight(float InNewHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.SetHeight"));
    struct Params_SetHeight {
        float InNewHeight; // 0x0
    }; // Size: 0x4
    Params_SetHeight params{};
    params.InNewHeight = (float)InNewHeight;
    ProcessEvent(func, &params);
}
void UWindSourceVortexComponent::SetEnvelope(UWindEnvelopeController* InNewEnvelope) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.SetEnvelope"));
    struct Params_SetEnvelope {
        UWindEnvelopeController* InNewEnvelope; // 0x0
    }; // Size: 0x8
    Params_SetEnvelope params{};
    params.InNewEnvelope = (UWindEnvelopeController*)InNewEnvelope;
    ProcessEvent(func, &params);
}
void UWindSourceVortexComponent::SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindSourceVortexComponent.SetAutoKillAfterEnvelope"));
    struct Params_SetAutoKillAfterEnvelope {
        bool bInNewAutoKillAfterEnvelope; // 0x0
    }; // Size: 0x1
    Params_SetAutoKillAfterEnvelope params{};
    params.bInNewAutoKillAfterEnvelope = (bool)bInNewAutoKillAfterEnvelope;
    ProcessEvent(func, &params);
}
