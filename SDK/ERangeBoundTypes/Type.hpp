#pragma once
#include <cstdint>
namespace ERangeBoundTypes {
#pragma pack(push, 1)
enum Type : uint8_t {
    Exclusive = 0,
    Inclusive = 1,
    Open = 2,
    ERangeBoundTypes_MAX = 3,
};
#pragma pack(pop)
}
