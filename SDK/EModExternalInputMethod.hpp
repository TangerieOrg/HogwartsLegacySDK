#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EModExternalInputMethod : uint8_t {
    CallExternalInputFunction = 0,
    ReadExternalInputTagBlackboardValue = 1,
    EModExternalInputMethod_MAX = 2,
};
#pragma pack(pop)
