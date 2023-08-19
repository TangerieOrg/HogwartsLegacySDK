#include "APlayerController.hpp"
#include "UFindTurnBasedMatchCallbackProxy.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
    return (UFindTurnBasedMatchCallbackProxy*)res;
}
void UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController) {}
