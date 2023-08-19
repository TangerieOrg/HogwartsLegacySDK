#pragma once
#include <cstdint>
#include "UARBaseAsyncTaskBlueprintProxy.hpp"
class UObject;
#pragma pack(push, 1)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
public:
    char pad_50[0x50];
    static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* StaticClass();
    void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);
    static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude);
    static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(UObject* WorldContextObject);
}; // Size: 0xa0
#pragma pack(pop)
