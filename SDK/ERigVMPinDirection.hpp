#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigVMPinDirection {
    Input = 0,
    Output = 1,
    IO = 2,
    Visible = 3,
    Hidden = 4,
    Invalid = 5,
    ERigVMPinDirection_MAX = 6,
};
#pragma pack(pop)
