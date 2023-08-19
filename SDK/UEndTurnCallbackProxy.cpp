#include "APlayerController.hpp"
#include "UEndTurnCallbackProxy.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UEndTurnCallbackProxy* UEndTurnCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy");
    return (UEndTurnCallbackProxy*)res;
}
void UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID) {}
