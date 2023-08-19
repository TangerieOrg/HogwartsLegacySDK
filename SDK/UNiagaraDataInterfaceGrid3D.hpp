#pragma once
#include <cstdint>
#include "ESetResolutionMethod.hpp"
#include "FIntVector.hpp"
#include "FVector.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase {
public:
    FIntVector NumCells; // 0xd8
    float CellSize; // 0xe4
    int32_t NumCellsMaxAxis; // 0xe8
    ESetResolutionMethod SetResolutionMethod; // 0xec
    FVector WorldBBoxSize; // 0xf0
    char pad_fc[0x4];
    static UNiagaraDataInterfaceGrid3D* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
