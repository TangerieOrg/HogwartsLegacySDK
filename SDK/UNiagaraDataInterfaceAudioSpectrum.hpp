#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceAudioSubmix.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix {
public:
    int32_t Resolution; // 0x40
    float MinimumFrequency; // 0x44
    float MaximumFrequency; // 0x48
    float NoiseFloorDb; // 0x4c
    static UNiagaraDataInterfaceAudioSpectrum* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
