#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface {
public:
    TArray<float> ShaderLUT; // 0x38
    float LUTMinTime; // 0x48
    float LUTMaxTime; // 0x4c
    float LUTInvTimeRange; // 0x50
    float LUTNumSamplesMinusOne; // 0x54
    uint8_t bUseLUT : 1; // 0x58
    uint8_t bExposeCurve : 1; // 0x58
    uint8_t pad_bitfield_58_2 : 6;
    char pad_59[0x3];
    FName ExposedName; // 0x5c
    char pad_64[0x4];
    UTexture2D* ExposedTexture; // 0x68
    static UNiagaraDataInterfaceCurveBase* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
