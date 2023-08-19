#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x48];
    static UConnectionCallbackProxy* StaticClass();
    static UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);
}; // Size: 0x78
#pragma pack(pop)
