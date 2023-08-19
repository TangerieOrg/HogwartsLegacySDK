#pragma once
#include <cstdint>
#include "FLightClippingPlane.hpp"
#include "FRotator.hpp"
#include "ULightClippingPlanesComponentBase.hpp"
struct FVector;
#pragma pack(push, 1)
class ULightClippingPlanesComponent : public ULightClippingPlanesComponentBase {
public:
    char pad_230[0x20];
    static ULightClippingPlanesComponent* StaticClass();
    void SetClippingPlaneEnabled(int32_t ClippingPlaneIndex, bool bIsEnabled);
    void GetClippingPlanesCount(int32_t& NumClippingPlanes);
    void GetClippingPlaneEnabled(int32_t ClippingPlaneIndex, bool& bIsEnabled);
    void GetClippingPlane(int32_t ClippingPlaneIndex, FVector& PlaneOrigin, FVector& PlaneNormal, bool& bIsEnabled);
    void ClearClippingPlanes();
    void AddRelativeClippingPlane(FRotator InRelativeRotation, float InRelativeDistance, bool bIsEnabled);
}; // Size: 0x250
#pragma pack(pop)
