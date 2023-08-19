#include "APlayerController.hpp"
#include "UEndMatchCallbackProxy.hpp"
#include "UObject.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UEndMatchCallbackProxy* UEndMatchCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy");
    return (UEndMatchCallbackProxy*)res;
}
void UEndMatchCallbackProxy::EndMatch(UObject* WorldContextObject, APlayerController* PlayerController) {}
