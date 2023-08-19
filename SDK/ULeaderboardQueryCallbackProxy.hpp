#pragma once
#include <cstdint>
#include "UObject.hpp"
class APlayerController;
#pragma pack(push, 1)
class ULeaderboardQueryCallbackProxy : public UObject {
public:
    char pad_28[0x70];
    static ULeaderboardQueryCallbackProxy* StaticClass();
    static ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);
}; // Size: 0x98
#pragma pack(pop)
