#include "FVector.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UMercunaClampToNavigableProxy.hpp"
#include "UObject.hpp"
UMercunaClampToNavigableProxy* UMercunaClampToNavigableProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaClampToNavigableProxy");
    return (UMercunaClampToNavigableProxy*)res;
}
UMercunaClampToNavigableProxy* UMercunaClampToNavigableProxy::MercunaClampToNavigable(UObject* WorldContextObject, FVector Position, float NavigationRadius, float SearchRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaClampToNavigableProxy.MercunaClampToNavigable"));
    struct Params_MercunaClampToNavigable {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        float NavigationRadius; // 0x14
        float SearchRadius; // 0x18
        char pad_1c[0x4];
        UMercunaClampToNavigableProxy* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_MercunaClampToNavigable params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.NavigationRadius = (float)NavigationRadius;
    params.SearchRadius = (float)SearchRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMercunaClampToNavigableProxy*)params.ReturnValue;
}
