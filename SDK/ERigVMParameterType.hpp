#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigVMParameterType : uint8_t {
    Input = 0,
    Output = 1,
    Invalid = 2,
    ERigVMParameterType_MAX = 3,
};
#pragma pack(pop)
