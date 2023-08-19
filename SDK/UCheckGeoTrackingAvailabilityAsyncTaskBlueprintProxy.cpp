#include "UARBaseAsyncTaskBlueprintProxy.hpp"
#include "UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy");
    return (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*)res;
}
void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature"));
    struct Params_GeoTrackingAvailabilityDelegate__DelegateSignature {
        bool bIsAvailable; // 0x0
        char pad_1[0x7];
        FString Error; // 0x8
    }; // Size: 0x18
    Params_GeoTrackingAvailabilityDelegate__DelegateSignature params{};
    params.bIsAvailable = (bool)bIsAvailable;
    params.Error = (FString)Error;
    ProcessEvent(func, &params);
}
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation"));
    struct Params_CheckGeoTrackingAvailabilityAtLocation {
        UObject* WorldContextObject; // 0x0
        float Longitude; // 0x8
        float Latitude; // 0xc
        UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CheckGeoTrackingAvailabilityAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Longitude = (float)Longitude;
    params.Latitude = (float)Latitude;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*)params.ReturnValue;
}
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability"));
    struct Params_CheckGeoTrackingAvailability {
        UObject* WorldContextObject; // 0x0
        UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CheckGeoTrackingAvailability params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy*)params.ReturnValue;
}
