#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigVMMemoryType : uint8_t {
    Work = 0,
    Literal = 1,
    External = 2,
    Invalid = 3,
    ERigVMMemoryType_MAX = 4,
};
#pragma pack(pop)
