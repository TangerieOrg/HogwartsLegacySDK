#pragma once
#include <cstdint>
#include "ENiagaraIterationSource.hpp"
#include "FNiagaraVariableDataInterfaceBinding.hpp"
#include "UNiagaraSimulationStageBase.hpp"
#pragma pack(push, 1)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase {
public:
    ENiagaraIterationSource IterationSource; // 0x40
    char pad_41[0x3];
    int32_t iterations; // 0x44
    uint8_t bSpawnOnly : 1; // 0x48
    uint8_t bDisablePartialParticleUpdate : 1; // 0x48
    uint8_t pad_bitfield_48_2 : 6;
    char pad_49[0x7];
    FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
    static UNiagaraSimulationStageGeneric* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
