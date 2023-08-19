#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraScriptExecutionPaddingInfo {
    uint16_t SrcOffset; // 0x0
    uint16_t DestOffset; // 0x2
    uint16_t SrcSize; // 0x4
    uint16_t DestSize; // 0x6
}; // Size: 0x8
#pragma pack(pop)
