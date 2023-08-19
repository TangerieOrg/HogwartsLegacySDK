#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraEventReceiverProperties {
    FName Name; // 0x0
    FName SourceEventGenerator; // 0x8
    FName SourceEmitter; // 0x10
}; // Size: 0x18
#pragma pack(pop)
