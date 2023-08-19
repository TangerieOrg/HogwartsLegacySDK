#include "UBlueprintAsyncActionBase.hpp"
#include "UOnlineBlueprintCallProxyBase.hpp"
UOnlineBlueprintCallProxyBase* UOnlineBlueprintCallProxyBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.OnlineBlueprintCallProxyBase");
    return (UOnlineBlueprintCallProxyBase*)res;
}
