#include "UARBaseAsyncTaskBlueprintProxy.hpp"
#include "UBlueprintAsyncActionBase.hpp"
UARBaseAsyncTaskBlueprintProxy* UARBaseAsyncTaskBlueprintProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
    return (UARBaseAsyncTaskBlueprintProxy*)res;
}
