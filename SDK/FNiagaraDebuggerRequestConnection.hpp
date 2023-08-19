#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FNiagaraDebuggerRequestConnection {
    FGuid SessionId; // 0x0
    FGuid InstanceId; // 0x10
}; // Size: 0x20
#pragma pack(pop)
