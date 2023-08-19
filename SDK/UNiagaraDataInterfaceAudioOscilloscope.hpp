#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class USoundSubmix;
#pragma pack(push, 1)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface {
public:
    USoundSubmix* Submix; // 0x38
    int32_t Resolution; // 0x40
    float ScopeInMilliseconds; // 0x44
    static UNiagaraDataInterfaceAudioOscilloscope* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
