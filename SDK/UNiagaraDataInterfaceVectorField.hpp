#pragma once
#include <cstdint>
#include "UNiagaraDataInterface.hpp"
class UVectorField;
#pragma pack(push, 1)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface {
public:
    UVectorField* Field; // 0x38
    bool bTileX; // 0x40
    bool bTileY; // 0x41
    bool bTileZ; // 0x42
    char pad_43[0x5];
    static UNiagaraDataInterfaceVectorField* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
