#pragma once
#include <cstdint>
namespace EMaterialAttributeBlend {
#pragma pack(push, 1)
enum Type : uint8_t {
    Blend = 0,
    UseA = 1,
    UseB = 2,
    EMaterialAttributeBlend_MAX = 3,
};
#pragma pack(pop)
}
