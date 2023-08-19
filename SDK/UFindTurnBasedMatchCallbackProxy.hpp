#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x58];
    static UFindTurnBasedMatchCallbackProxy* StaticClass();
    static void FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController);
}; // Size: 0x88
#pragma pack(pop)
