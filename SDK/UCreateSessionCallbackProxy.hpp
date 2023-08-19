#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x68];
    static UCreateSessionCallbackProxy* StaticClass();
    static UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN);
}; // Size: 0x98
#pragma pack(pop)
