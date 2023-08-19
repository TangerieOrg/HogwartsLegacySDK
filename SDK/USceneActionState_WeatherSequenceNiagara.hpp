#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequence.hpp"
class UNiagaraSystem;
class UNiagaraComponent;
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceNiagara : public USceneActionState_WeatherSequence {
public:
    UNiagaraSystem* NiagaraSystem; // 0x50
    TArray<UNiagaraComponent*> NiagaraComponents; // 0x58
    bool bInInterval; // 0x68
    bool bSpawned; // 0x69
    char pad_6a[0x16];
    static USceneActionState_WeatherSequenceNiagara* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
