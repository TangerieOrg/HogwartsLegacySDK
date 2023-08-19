#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EWBPNPlatformLinkType {
    WBPN_PLATFORM_INVALID = 0,
    WBPN_PLATFORM_DISCORD = 1,
    WBPN_PLATFORM_EPIC = 2,
    WBPN_PLATFORM_MAX = 3,
};
#pragma pack(pop)
