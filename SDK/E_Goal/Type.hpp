#pragma once
#include <cstdint>
namespace E_Goal {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Current = 1,
    Future = 2,
    E_MAX = 3,
};
#pragma pack(pop)
}
