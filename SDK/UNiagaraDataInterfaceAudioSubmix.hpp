#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class USoundSubmix;
#pragma pack(push, 1)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface {
public:
    USoundSubmix* Submix; // 0x38
    static UNiagaraDataInterfaceAudioSubmix* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
