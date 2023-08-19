#pragma once
#include <cstdint>
#include "EWindDirectionalEnvelopeAffects.hpp"
#include "UWindDirectionalSourceComponent.hpp"
class UWindEnvelopeController;
#pragma pack(push, 1)
class UWindDirectionalSourceWithEnvelopeComponent : public UWindDirectionalSourceComponent {
public:
    UWindEnvelopeController* Envelope; // 0x250
    EWindDirectionalEnvelopeAffects EnvelopeAffects; // 0x258
    bool bAutoKillAfterEnvelope; // 0x259
    char pad_25a[0x16];
    float StartTime; // 0x270
    bool bActive; // 0x274
    char pad_275[0x1b];
    static UWindDirectionalSourceWithEnvelopeComponent* StaticClass();
    void SetEnvelopeAffects(EWindDirectionalEnvelopeAffects InNewEnvelopeAffects);
    void SetEnvelope(UWindEnvelopeController* InNewEnvelope);
    void SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope);
}; // Size: 0x290
#pragma pack(pop)
