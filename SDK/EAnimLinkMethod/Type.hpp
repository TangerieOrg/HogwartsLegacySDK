#pragma once
#include <cstdint>
namespace EAnimLinkMethod {
#pragma pack(push, 1)
enum Type : uint8_t {
    Absolute = 0,
    Relative = 1,
    Proportional = 2,
    EAnimLinkMethod_MAX = 3,
};
#pragma pack(pop)
}
