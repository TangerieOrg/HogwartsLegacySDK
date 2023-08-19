#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase {
public:
    int32_t NumCellsX; // 0xd8
    int32_t NumCellsY; // 0xdc
    int32_t NumCellsMaxAxis; // 0xe0
    int32_t NumAttributes; // 0xe4
    bool SetGridFromMaxAxis; // 0xe8
    char pad_e9[0x3];
    FVector2D WorldBBoxSize; // 0xec
    char pad_f4[0x4];
    static UNiagaraDataInterfaceGrid2D* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
