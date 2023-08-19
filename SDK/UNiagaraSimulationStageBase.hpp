#pragma once
#include <cstdint>
#include "UNiagaraMergeable.hpp"
class UNiagaraScript;
#pragma pack(push, 1)
class UNiagaraSimulationStageBase : public UNiagaraMergeable {
public:
    UNiagaraScript* Script; // 0x28
    FName SimulationStageName; // 0x30
    uint8_t bEnabled : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
    static UNiagaraSimulationStageBase* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
