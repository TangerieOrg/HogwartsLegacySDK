#pragma once
#include <cstdint>
#include "EWindVortexEnvelopeAffects.hpp"
#include "UWindSourceComponentBaseData.hpp"
class UWindEnvelopeController;
#pragma pack(push, 1)
class UWindSourceVortexComponent : public UWindSourceComponentBaseData {
public:
    float InnerRadius; // 0x240
    float Strength; // 0x244
    float Speed; // 0x248
    char pad_24c[0x4];
    UWindEnvelopeController* Envelope; // 0x250
    int32_t EnvelopeAffects; // 0x258
    bool bAutoKillAfterEnvelope; // 0x25c
    char pad_25d[0x13];
    float StartTime; // 0x270
    bool bActive; // 0x274
    char pad_275[0x1b];
    static UWindSourceVortexComponent* StaticClass();
    void UnsetEnvelopeAffects(EWindVortexEnvelopeAffects InNewEnvelopeAffects);
    void TestEnvelopeAffects(EWindVortexEnvelopeAffects InNewEnvelopeAffects, bool& bIsSet);
    void SetStrength(float InNewStrength);
    void SetSpeed(float InNewSpeed);
    void SetRadius(float InNewRadius);
    void SetInnerRadius(float InNewInnerRadius);
    void SetHeight(float InNewHeight);
    void SetEnvelopeAffects(EWindVortexEnvelopeAffects InNewEnvelopeAffects);
    void SetEnvelope(UWindEnvelopeController* InNewEnvelope);
    void SetAutoKillAfterEnvelope(bool bInNewAutoKillAfterEnvelope);
    void ClearEnvelopeAffects();
}; // Size: 0x290
#pragma pack(pop)
