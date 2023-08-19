#pragma once
#include <cstdint>
#include "FAtmospherePrecomputeFullParameters.hpp"
#pragma pack(push, 1)
struct FAtmospherePrecomputeParameters {
    float DensityHeight; // 0x0
    FAtmospherePrecomputeFullParameters FullParams; // 0x4
    float DecayHeight; // 0x2c
    int32_t MaxScatteringOrder; // 0x30
    int32_t TransmittanceTexWidth; // 0x34
    int32_t TransmittanceTexHeight; // 0x38
    int32_t IrradianceTexWidth; // 0x3c
    int32_t IrradianceTexHeight; // 0x40
    int32_t InscatterAltitudeSampleNum; // 0x44
    int32_t InscatterMuNum; // 0x48
    int32_t InscatterMuSNum; // 0x4c
    int32_t InscatterNuNum; // 0x50
    bool bUseFullParams; // 0x54
    char pad_55[0x3];
}; // Size: 0x58
#pragma pack(pop)
