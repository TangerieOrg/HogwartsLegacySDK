#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERigExecutionType : uint8_t {
    Runtime = 0,
    Editing = 1,
    Max = 2,
};
#pragma pack(pop)
