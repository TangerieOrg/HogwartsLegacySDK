#pragma once
#include <cstdint>
#include "EARGeoTrackingAccuracy.hpp"
#include "EARGeoTrackingState.hpp"
#include "EARGeoTrackingStateReason.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UARGeoTrackingSupport : public UObject {
public:
    static UARGeoTrackingSupport* StaticClass();
    static UARGeoTrackingSupport* GetGeoTrackingSupport();
    EARGeoTrackingStateReason GetGeoTrackingStateReason();
    EARGeoTrackingState GetGeoTrackingState();
    EARGeoTrackingAccuracy GetGeoTrackingAccuracy();
    bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName);
    bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);
}; // Size: 0x28
#pragma pack(pop)
