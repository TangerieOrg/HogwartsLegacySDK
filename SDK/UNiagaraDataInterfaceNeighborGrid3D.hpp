#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceGrid3D.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D {
public:
    uint32_t MaxNeighborsPerCell; // 0x100
    char pad_104[0x4];
    static UNiagaraDataInterfaceNeighborGrid3D* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
