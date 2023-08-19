#pragma once
#include <cstdint>
#include "UNiagaraDataInterfaceGrid2D.hpp"
#pragma pack(push, 1)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D {
public:
    FString EmitterName; // 0xf8
    FString DIName; // 0x108
    char pad_118[0x50];
    static UNiagaraDataInterfaceGrid2DCollectionReader* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
