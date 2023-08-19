#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAccountLinkStatus : uint8_t {
    NoOnlineConnection = 0,
    LocalOnlyProfile = 1,
    NoLink = 2,
    WBPNLoggedIn = 3,
    WBPNCompleted = 4,
    WWIDLinked = 5,
    EAccountLinkStatus_MAX = 6,
};
#pragma pack(pop)
