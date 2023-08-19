#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x48];
    static UDestroySessionCallbackProxy* StaticClass();
    static UDestroySessionCallbackProxy* DestroySession(UObject* WorldContextObject, APlayerController* PlayerController);
}; // Size: 0x78
#pragma pack(pop)
