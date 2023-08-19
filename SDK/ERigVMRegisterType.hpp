#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigVMRegisterType : uint8_t {
    Plain = 0,
    String = 1,
    Name = 2,
    Struct = 3,
    Invalid = 4,
    ERigVMRegisterType_MAX = 5,
};
#pragma pack(pop)
