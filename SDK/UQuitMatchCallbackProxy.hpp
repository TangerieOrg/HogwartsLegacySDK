#pragma once
#include <cstdint>
#include "EMPMatchOutcome\Outcome.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x48];
    static UQuitMatchCallbackProxy* StaticClass();
    static UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, EMPMatchOutcome::Outcome Outcome, int32_t TurnTimeoutInSeconds);
}; // Size: 0x78
#pragma pack(pop)
