#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOodleEnableMode {
    AlwaysEnabled = 0,
    WhenCompressedPacketReceived = 1,
    EOodleEnableMode_MAX = 2,
};
#pragma pack(pop)
