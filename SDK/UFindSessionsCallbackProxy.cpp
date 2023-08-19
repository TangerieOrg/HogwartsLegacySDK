#include "APlayerController.hpp"
#include "FBlueprintSessionResult.hpp"
#include "UFindSessionsCallbackProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy");
    return (UFindSessionsCallbackProxy*)res;
}
UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions"));
    struct Params_FindSessions {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        int32_t MaxResults; // 0x10
        bool bUseLAN; // 0x14
        char pad_15[0x3];
        UFindSessionsCallbackProxy* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_FindSessions params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.MaxResults = (int32_t)MaxResults;
    params.bUseLAN = (bool)bUseLAN;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UFindSessionsCallbackProxy*)params.ReturnValue;
}
FString UFindSessionsCallbackProxy::GetServerName(FBlueprintSessionResult& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName"));
    struct Params_GetServerName {
        FBlueprintSessionResult Result; // 0x0
        FString ReturnValue; // 0x108
    }; // Size: 0x118
    Params_GetServerName params{};
    params.Result = (FBlueprintSessionResult)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (FString)params.ReturnValue;
}
int32_t UFindSessionsCallbackProxy::GetCurrentPlayers(FBlueprintSessionResult& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers"));
    struct Params_GetCurrentPlayers {
        FBlueprintSessionResult Result; // 0x0
        int32_t ReturnValue; // 0x108
    }; // Size: 0x10c
    Params_GetCurrentPlayers params{};
    params.Result = (FBlueprintSessionResult)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (int32_t)params.ReturnValue;
}
int32_t UFindSessionsCallbackProxy::GetPingInMs(FBlueprintSessionResult& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs"));
    struct Params_GetPingInMs {
        FBlueprintSessionResult Result; // 0x0
        int32_t ReturnValue; // 0x108
    }; // Size: 0x10c
    Params_GetPingInMs params{};
    params.Result = (FBlueprintSessionResult)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (int32_t)params.ReturnValue;
}
int32_t UFindSessionsCallbackProxy::GetMaxPlayers(FBlueprintSessionResult& Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers"));
    struct Params_GetMaxPlayers {
        FBlueprintSessionResult Result; // 0x0
        int32_t ReturnValue; // 0x108
    }; // Size: 0x10c
    Params_GetMaxPlayers params{};
    params.Result = (FBlueprintSessionResult)Result;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (int32_t)params.ReturnValue;
}
