#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x50];
    static UEndMatchCallbackProxy* StaticClass();
    static void EndMatch(UObject* WorldContextObject, APlayerController* PlayerController);
}; // Size: 0x80
#pragma pack(pop)
