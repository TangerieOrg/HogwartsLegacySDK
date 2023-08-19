#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceRWBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase {
public:
    FString EmitterName; // 0xd8
    static UNiagaraDataInterfaceParticleRead* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
