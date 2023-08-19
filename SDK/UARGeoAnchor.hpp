#pragma once
#include <cstdint>
#include "EARAltitudeSource.hpp"
#include "UARTrackedGeometry.hpp"
#pragma pack(push, 1)
class UARGeoAnchor : public UARTrackedGeometry {
public:
    char pad_100[0x10];
    static UARGeoAnchor* StaticClass();
    float GetLongitude();
    float GetLatitude();
    EARAltitudeSource GetAltitudeSource();
    float GetAltitudeMeters();
}; // Size: 0x110
#pragma pack(pop)
