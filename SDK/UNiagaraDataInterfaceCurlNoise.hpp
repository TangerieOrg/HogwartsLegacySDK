#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface {
public:
    uint32_t Seed; // 0x38
    char pad_3c[0xc];
    static UNiagaraDataInterfaceCurlNoise* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
