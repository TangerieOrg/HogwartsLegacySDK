#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class USoundBase;
class USoundAttenuation;
class USoundConcurrency;
#pragma pack(push, 1)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface {
public:
    USoundBase* SoundToPlay; // 0x38
    USoundAttenuation* Attenuation; // 0x40
    USoundConcurrency* Concurrency; // 0x48
    TArray<FName> ParameterNames; // 0x50
    bool bLimitPlaysPerTick; // 0x60
    char pad_61[0x3];
    int32_t MaxPlaysPerTick; // 0x64
    bool bStopWhenComponentIsDestroyed; // 0x68
    char pad_69[0x7];
    static UNiagaraDataInterfaceAudioPlayer* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
