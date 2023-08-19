#pragma once
#include <cstdint>
#include "EWindPointEnvelopeAffects.hpp"
#include "UWindPointSourceComponent.hpp"
class UWindEnvelopeController;
#pragma pack(push, 1)
class UWindPointSourceWithEnvelopeComponent : public UWindPointSourceComponent {
public:
    int32_t EnvelopeAffects; // 0x250
    bool bAutoKillAfterEnvelope; // 0x254
    char pad_255[0x13];
    float StartTime; // 0x268
    bool bActive; // 0x26c
    char pad_26d[0x13];
    static UWindPointSourceWithEnvelopeComponent* StaticClass();
    void UnsetEnvelopeAffects(EWindPointEnvelopeAffects InNewEnvelopeAffects);
    void TestEnvelopeAffects(EWindPointEnvelopeAffects InNewEnvelopeAffects, bool& bIsSet);
    void SetEnvelopeAffects(EWindPointEnvelopeAffects InNewEnvelopeAffects);
    void SetEnvelope(UWindEnvelopeController* InNewEnvelope);
    void SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope);
    void ClearEnvelopeAffects();
}; // Size: 0x280
#pragma pack(pop)
