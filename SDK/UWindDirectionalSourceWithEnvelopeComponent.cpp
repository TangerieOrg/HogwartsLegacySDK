#include "EWindDirectionalEnvelopeAffects.hpp"
#include "UFunction.hpp"
#include "UWindDirectionalSourceComponent.hpp"
#include "UWindDirectionalSourceWithEnvelopeComponent.hpp"
#include "UWindEnvelopeController.hpp"
UWindDirectionalSourceWithEnvelopeComponent* UWindDirectionalSourceWithEnvelopeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindDirectionalSourceWithEnvelopeComponent");
    return (UWindDirectionalSourceWithEnvelopeComponent*)res;
}
void UWindDirectionalSourceWithEnvelopeComponent::SetEnvelopeAffects(EWindDirectionalEnvelopeAffects InNewEnvelopeAffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDirectionalSourceWithEnvelopeComponent.SetEnvelopeAffects"));
    struct Params_SetEnvelopeAffects {
        EWindDirectionalEnvelopeAffects InNewEnvelopeAffects; // 0x0
    }; // Size: 0x1
    Params_SetEnvelopeAffects params{};
    params.InNewEnvelopeAffects = (EWindDirectionalEnvelopeAffects)InNewEnvelopeAffects;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceWithEnvelopeComponent::SetEnvelope(UWindEnvelopeController* InNewEnvelope) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDirectionalSourceWithEnvelopeComponent.SetEnvelope"));
    struct Params_SetEnvelope {
        UWindEnvelopeController* InNewEnvelope; // 0x0
    }; // Size: 0x8
    Params_SetEnvelope params{};
    params.InNewEnvelope = (UWindEnvelopeController*)InNewEnvelope;
    ProcessEvent(func, &params);
}
void UWindDirectionalSourceWithEnvelopeComponent::SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.WindDirectionalSourceWithEnvelopeComponent.SetAutoKillAfterEnvelope"));
    struct Params_SetAutoKillAfterEnvelope {
        bool bInNewAutoKillAfterEnvelope; // 0x0
    }; // Size: 0x1
    Params_SetAutoKillAfterEnvelope params{};
    params.bInNewAutoKillAfterEnvelope = (bool)bInNewAutoKillAfterEnvelope;
    ProcessEvent(func, &params);
}
