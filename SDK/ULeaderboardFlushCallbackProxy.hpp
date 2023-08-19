#pragma once
#include <cstdint>
#include "UObject.hpp"
class APlayerController;
#pragma pack(push, 1)
class ULeaderboardFlushCallbackProxy : public UObject {
public:
    char pad_28[0x40];
    static ULeaderboardFlushCallbackProxy* StaticClass();
    static ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);
}; // Size: 0x68
#pragma pack(pop)
