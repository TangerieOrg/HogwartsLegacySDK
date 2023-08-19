#pragma once
#include <cstdint>
namespace EConstraintFrame {
#pragma pack(push, 1)
enum Type : uint8_t {
    Frame1 = 0,
    Frame2 = 1,
    EConstraintFrame_MAX = 2,
};
#pragma pack(pop)
}
