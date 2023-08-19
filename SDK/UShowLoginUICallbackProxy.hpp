#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x30];
    static UShowLoginUICallbackProxy* StaticClass();
    static UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);
}; // Size: 0x60
#pragma pack(pop)
