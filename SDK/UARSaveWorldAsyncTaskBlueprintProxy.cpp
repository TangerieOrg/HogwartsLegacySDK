#include "UARBaseAsyncTaskBlueprintProxy.hpp"
#include "UARSaveWorldAsyncTaskBlueprintProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld"));
    struct Params_ARSaveWorld {
        UObject* WorldContextObject; // 0x0
        UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ARSaveWorld params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARSaveWorldAsyncTaskBlueprintProxy*)params.ReturnValue;
}
UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
    return (UARSaveWorldAsyncTaskBlueprintProxy*)res;
}
