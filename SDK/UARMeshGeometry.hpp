#pragma once
#include <cstdint>
#include "EARObjectClassification.hpp"
#include "UARTrackedGeometry.hpp"
struct FVector;
#pragma pack(push, 1)
class UARMeshGeometry : public UARTrackedGeometry {
public:
    static UARMeshGeometry* StaticClass();
    bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
}; // Size: 0x100
#pragma pack(pop)
