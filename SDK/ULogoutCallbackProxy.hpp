#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x38];
    static ULogoutCallbackProxy* StaticClass();
    static ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);
}; // Size: 0x68
#pragma pack(pop)
