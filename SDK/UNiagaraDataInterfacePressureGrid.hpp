#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceVelocityGrid.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid {
public:
    static UNiagaraDataInterfacePressureGrid* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
