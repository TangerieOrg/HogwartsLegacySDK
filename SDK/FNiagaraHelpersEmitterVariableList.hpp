#pragma once
#include <cstdint>
#include "FNiagaraHelpersVariableList.hpp"
#pragma pack(push, 1)
struct FNiagaraHelpersEmitterVariableList : public FNiagaraHelpersVariableList {
    FName EmitterName; // 0x18
    bool bDefaultEnabled; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
