#pragma once
#include <cstdint>
#include "ENiagaraVariantMode.hpp"
class UObject;
class UNiagaraDataInterface;
#pragma pack(push, 1)
struct FNiagaraVariant {
    UObject* Object; // 0x0
    UNiagaraDataInterface* DataInterface; // 0x8
    TArray<uint8_t> Bytes; // 0x10
    ENiagaraVariantMode CurrentMode; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
