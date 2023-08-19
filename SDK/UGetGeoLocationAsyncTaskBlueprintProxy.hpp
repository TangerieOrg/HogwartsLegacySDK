#pragma once
#include <cstdint>
#include "UARBaseAsyncTaskBlueprintProxy.hpp"
class UObject;
struct FVector;
#pragma pack(push, 1)
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
public:
    char pad_50[0x50];
    static UGetGeoLocationAsyncTaskBlueprintProxy* StaticClass();
    void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);
    static UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, FVector& WorldPosition);
}; // Size: 0xa0
#pragma pack(pop)
