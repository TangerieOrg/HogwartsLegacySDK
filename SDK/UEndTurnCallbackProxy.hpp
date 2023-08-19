#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x48];
    static UEndTurnCallbackProxy* StaticClass();
    static void EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID);
}; // Size: 0x78
#pragma pack(pop)
