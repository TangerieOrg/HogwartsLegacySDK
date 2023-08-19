#pragma once
#include <cstdint>
#include "FIntVector.hpp"
#include "UNiagaraDataInterfaceRWBase.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase {
public:
    FIntVector GridSize; // 0xd8
    char pad_e4[0x4];
    static UNiagaraDataInterfaceVelocityGrid* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
