#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FNiagaraTypeDefinition {
    UObject* ClassStructOrEnum; // 0x0
    uint16_t UnderlyingType; // 0x8
    char pad_a[0x6];
}; // Size: 0x10
#pragma pack(pop)
