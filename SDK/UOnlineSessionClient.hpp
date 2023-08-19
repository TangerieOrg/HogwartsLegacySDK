#pragma once
#include <cstdint>
#include "UOnlineSession.hpp"
#pragma pack(push, 1)
class UOnlineSessionClient : public UOnlineSession {
public:
    char pad_28[0x198];
    bool bIsFromInvite; // 0x1c0
    bool bHandlingDisconnect; // 0x1c1
    char pad_1c2[0x6];
    static UOnlineSessionClient* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
