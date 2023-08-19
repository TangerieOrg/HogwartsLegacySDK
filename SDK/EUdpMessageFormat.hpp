#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUdpMessageFormat : uint8_t {
    None = 0,
    Json = 1,
    TaggedProperty = 2,
    CborPlatformEndianness = 3,
    CborStandardEndianness = 4,
    EUdpMessageFormat_MAX = 5,
};
#pragma pack(pop)
