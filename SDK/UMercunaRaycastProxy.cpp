#include "FVector.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UMercunaRaycastProxy.hpp"
#include "UObject.hpp"
UMercunaRaycastProxy* UMercunaRaycastProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaRaycastProxy");
    return (UMercunaRaycastProxy*)res;
}
UMercunaRaycastProxy* UMercunaRaycastProxy::MercunaRaycast(UObject* WorldContextObject, FVector Start, FVector End, float NavigationRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaRaycastProxy.MercunaRaycast"));
    struct Params_MercunaRaycast {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        float NavigationRadius; // 0x20
        char pad_24[0x4];
        UMercunaRaycastProxy* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_MercunaRaycast params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.NavigationRadius = (float)NavigationRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMercunaRaycastProxy*)params.ReturnValue;
}
