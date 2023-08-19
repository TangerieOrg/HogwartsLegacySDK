#pragma once
#include <cstdint>
#include "FBasicParticleData.hpp"
#include "UInterface.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
class UNiagaraParticleCallbackHandler : public UInterface {
public:
    static UNiagaraParticleCallbackHandler* StaticClass();
    void ReceiveParticleData(TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem);
}; // Size: 0x28
#pragma pack(pop)
