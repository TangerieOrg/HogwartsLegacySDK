#pragma once
#include <cstdint>
#include "EWindDirectionalEnvelopeAffects.hpp"
#include "EWindSourceCombine.hpp"
#include "UMultiFX2_Filtered.hpp"
class UWindEnvelopeController;
class UWindGustController;
#pragma pack(push, 1)
class UMultiFX2_WindDirectionalSource : public UMultiFX2_Filtered {
public:
    UWindEnvelopeController* Envelope; // 0x68
    EWindDirectionalEnvelopeAffects EnvelopeAffects; // 0x70
    char pad_71[0x3];
    float Strength; // 0x74
    float Speed; // 0x78
    float BlendDistance; // 0x7c
    bool bUseScaleAsBounds; // 0x80
    char pad_81[0x7];
    UWindGustController* WindGustController; // 0x88
    float OutdoorsOnly; // 0x90
    float Priority; // 0x94
    bool bAutoKillAfterEnvelope; // 0x98
    bool bAttached; // 0x99
    EWindSourceCombine SourceCombine; // 0x9a
    char pad_9b[0x5];
    static UMultiFX2_WindDirectionalSource* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
