#include "APlayerController.hpp"
#include "FBlueprintSessionResult.hpp"
#include "UFunction.hpp"
#include "UJoinSessionCallbackProxy.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy");
    return (UJoinSessionCallbackProxy*)res;
}
UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult& SearchResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession"));
    struct Params_JoinSession {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        FBlueprintSessionResult SearchResult; // 0x10
        UJoinSessionCallbackProxy* ReturnValue; // 0x118
    }; // Size: 0x120
    Params_JoinSession params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.SearchResult = (FBlueprintSessionResult)SearchResult;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SearchResult = params.SearchResult;
    return (UJoinSessionCallbackProxy*)params.ReturnValue;
}
