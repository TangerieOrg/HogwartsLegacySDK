#include "EWindPointEnvelopeAffects.hpp"
#include "UFunction.hpp"
#include "UWindEnvelopeController.hpp"
#include "UWindPointSourceComponent.hpp"
#include "UWindPointSourceWithEnvelopeComponent.hpp"
void UWindPointSourceWithEnvelopeComponent::SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindPointSourceWithEnvelopeComponent.SetAutoKillAfterEnvelope"));
    struct Params_SetAutoKillAfterEnvelope {
        bool bInNewAutoKillAfterEnvelope; // 0x0
    }; // Size: 0x1
    Params_SetAutoKillAfterEnvelope params{};
    params.bInNewAutoKillAfterEnvelope = (bool)bInNewAutoKillAfterEnvelope;
    ProcessEvent(func, &params);
}
UWindPointSourceWithEnvelopeComponent* UWindPointSourceWithEnvelopeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindPointSourceWithEnvelopeComponent");
    return (UWindPointSourceWithEnvelopeComponent*)res;
}
void UWindPointSourceWithEnvelopeComponent::SetEnvelope(UWindEnvelopeController* InNewEnvelope) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindPointSourceWithEnvelopeComponent.SetEnvelope"));
    struct Params_SetEnvelope {
        UWindEnvelopeController* InNewEnvelope; // 0x0
    }; // Size: 0x8
    Params_SetEnvelope params{};
    params.InNewEnvelope = (UWindEnvelopeController*)InNewEnvelope;
    ProcessEvent(func, &params);
}
void UWindPointSourceWithEnvelopeComponent::UnsetEnvelopeAffects(EWindPointEnvelopeAffects InNewEnvelopeAffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindPointSourceWithEnvelopeComponent.UnsetEnvelopeAffects"));
    struct Params_UnsetEnvelopeAffects {
        EWindPointEnvelopeAffects InNewEnvelopeAffects; // 0x0
    }; // Size: 0x1
    Params_UnsetEnvelopeAffects params{};
    params.InNewEnvelopeAffects = (EWindPointEnvelopeAffects)InNewEnvelopeAffects;
    ProcessEvent(func, &params);
}
void UWindPointSourceWithEnvelopeComponent::TestEnvelopeAffects(EWindPointEnvelopeAffects InNewEnvelopeAffects, bool& bIsSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindPointSourceWithEnvelopeComponent.TestEnvelopeAffects"));
    struct Params_TestEnvelopeAffects {
        EWindPointEnvelopeAffects InNewEnvelopeAffects; // 0x0
        bool bIsSet; // 0x1
    }; // Size: 0x2
    Params_TestEnvelopeAffects params{};
    params.InNewEnvelopeAffects = (EWindPointEnvelopeAffects)InNewEnvelopeAffects;
    params.bIsSet = (bool)bIsSet;
    ProcessEvent(func, &params);
    bIsSet = params.bIsSet;
}
void UWindPointSourceWithEnvelopeComponent::SetEnvelopeAffects(EWindPointEnvelopeAffects InNewEnvelopeAffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindPointSourceWithEnvelopeComponent.SetEnvelopeAffects"));
    struct Params_SetEnvelopeAffects {
        EWindPointEnvelopeAffects InNewEnvelopeAffects; // 0x0
    }; // Size: 0x1
    Params_SetEnvelopeAffects params{};
    params.InNewEnvelopeAffects = (EWindPointEnvelopeAffects)InNewEnvelopeAffects;
    ProcessEvent(func, &params);
}
void UWindPointSourceWithEnvelopeComponent::ClearEnvelopeAffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindPointSourceWithEnvelopeComponent.ClearEnvelopeAffects"));
    struct Params_ClearEnvelopeAffects {
    }; // Size: 0x0
    Params_ClearEnvelopeAffects params{};
    ProcessEvent(func, &params);
}
