#include "APlayerController.hpp"
#include "UCreateSessionCallbackProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy");
    return (UCreateSessionCallbackProxy*)res;
}
UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession"));
    struct Params_CreateSession {
        UObject* WorldContextObject; // 0x0
        APlayerController* PlayerController; // 0x8
        int32_t PublicConnections; // 0x10
        bool bUseLAN; // 0x14
        char pad_15[0x3];
        UCreateSessionCallbackProxy* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_CreateSession params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerController = (APlayerController*)PlayerController;
    params.PublicConnections = (int32_t)PublicConnections;
    params.bUseLAN = (bool)bUseLAN;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCreateSessionCallbackProxy*)params.ReturnValue;
}
