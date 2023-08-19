#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConversationType : uint8_t {
    Vendor = 0,
    Greeting = 1,
    Critical = 2,
    VendorUpdate = 3,
    Update = 4,
    Standard = 5,
    VO = 6,
    EConversationType_MAX = 7,
};
#pragma pack(pop)
