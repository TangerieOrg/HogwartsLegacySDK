#pragma once
#include <cstdint>
namespace EEnvTestWeight {
#pragma pack(push, 1)
enum Type {
    None = 0,
    Square = 1,
    Inverse = 2,
    Unused = 3,
    Constant = 4,
    Skip = 5,
    EEnvTestWeight_MAX = 6,
};
#pragma pack(pop)
}
