#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraTypeLayoutInfo {
    TArray<uint32_t> FloatComponentByteOffsets; // 0x0
    TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
    TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
    TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
    TArray<uint32_t> HalfComponentByteOffsets; // 0x40
    TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
}; // Size: 0x60
#pragma pack(pop)
