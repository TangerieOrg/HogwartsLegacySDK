#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FNiagaraDebuggerExecuteConsoleCommand {
    FString Command; // 0x0
    bool bRequiresWorld; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
