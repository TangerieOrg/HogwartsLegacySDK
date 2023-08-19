#include "FVector.hpp"
#include "UARBaseAsyncTaskBlueprintProxy.hpp"
#include "UFunction.hpp"
#include "UGetGeoLocationAsyncTaskBlueprintProxy.hpp"
#include "UObject.hpp"
UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(UObject* WorldContextObject, FVector& WorldPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition"));
    struct Params_GetGeoLocationAtWorldPosition {
        UObject* WorldContextObject; // 0x0
        FVector WorldPosition; // 0x8
        char pad_14[0x4];
        UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetGeoLocationAtWorldPosition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WorldPosition = (FVector)WorldPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WorldPosition = params.WorldPosition;
    return (UGetGeoLocationAsyncTaskBlueprintProxy*)params.ReturnValue;
}
UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy");
    return (UGetGeoLocationAsyncTaskBlueprintProxy*)res;
}
void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature"));
    struct Params_GetGeoLocationDelegate__DelegateSignature {
        float Longitude; // 0x0
        float Latitude; // 0x4
        float Altitude; // 0x8
        char pad_c[0x4];
        FString Error; // 0x10
    }; // Size: 0x20
    Params_GetGeoLocationDelegate__DelegateSignature params{};
    params.Longitude = (float)Longitude;
    params.Latitude = (float)Latitude;
    params.Altitude = (float)Altitude;
    params.Error = (FString)Error;
    ProcessEvent(func, &params);
}
