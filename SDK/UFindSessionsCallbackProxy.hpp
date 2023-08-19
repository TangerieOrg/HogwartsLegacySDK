#pragma once
#include <cstdint>
#include "UOnlineBlueprintCallProxyBase.hpp"
struct FBlueprintSessionResult;
class UObject;
class APlayerController;
#pragma pack(push, 1)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
public:
    char pad_30[0x60];
    static UFindSessionsCallbackProxy* StaticClass();
    static FString GetServerName(FBlueprintSessionResult& Result);
    static int32_t GetPingInMs(FBlueprintSessionResult& Result);
    static int32_t GetMaxPlayers(FBlueprintSessionResult& Result);
    static int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);
    static UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
}; // Size: 0x90
#pragma pack(pop)
