#pragma once
#include <cstdint>
#include "FNiagaraHelpersInitializers.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UWorldFXNiagaraSystemParameters : public UDataAsset {
public:
    char pad_30[0x30];
    FNiagaraHelpersInitializers Overrides; // 0x60
    static UWorldFXNiagaraSystemParameters* StaticClass();
    void RefreshDefaults();
    void DefaultsToParameters();
    void ClearParameters();
}; // Size: 0xd0
#pragma pack(pop)
