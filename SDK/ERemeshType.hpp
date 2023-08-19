#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERemeshType : uint8_t {
    Standard = 0,
    FullPass = 1,
    NormalFlow = 2,
    ERemeshType_MAX = 3,
};
#pragma pack(pop)
