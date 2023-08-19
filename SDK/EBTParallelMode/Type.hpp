#pragma once
#include <cstdint>
namespace EBTParallelMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    AbortBackground = 0,
    WaitForBackground = 1,
    EBTParallelMode_MAX = 2,
};
#pragma pack(pop)
}
