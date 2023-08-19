#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVectorVMOperandLocation {
    Register = 0,
    Constant = 1,
    Num = 2,
    EVectorVMOperandLocation_MAX = 3,
};
#pragma pack(pop)
