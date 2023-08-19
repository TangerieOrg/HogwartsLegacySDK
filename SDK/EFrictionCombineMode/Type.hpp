#pragma once
#include <cstdint>
namespace EFrictionCombineMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Average = 0,
    Min = 1,
    Multiply = 2,
    Max = 3,
};
#pragma pack(pop)
}
