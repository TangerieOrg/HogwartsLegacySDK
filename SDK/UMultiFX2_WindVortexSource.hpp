#pragma once
#include <cstdint>
#include "EWindSourceCombine.hpp"
#include "UMultiFX2_Filtered.hpp"
class UWindEnvelopeController;
class UWindGustController;
#pragma pack(push, 1)
class UMultiFX2_WindVortexSource : public UMultiFX2_Filtered {
public:
    UWindEnvelopeController* Envelope; // 0x68
    int32_t EnvelopeAffects; // 0x70
    float Height; // 0x74
    float Radius; // 0x78
    float InnerRadius; // 0x7c
    float Strength; // 0x80
    float Speed; // 0x84
    UWindGustController* WindGustController; // 0x88
    float OutdoorsOnly; // 0x90
    float Priority; // 0x94
    bool bAutoKillAfterEnvelope; // 0x98
    bool bAttached; // 0x99
    EWindSourceCombine SourceCombine; // 0x9a
    char pad_9b[0x5];
    static UMultiFX2_WindVortexSource* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
