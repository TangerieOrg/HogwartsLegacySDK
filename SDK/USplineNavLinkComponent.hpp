#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UOdcNavLinkComponent.hpp"
class USplineComponent;
#pragma pack(push, 1)
class USplineNavLinkComponent : public UOdcNavLinkComponent {
public:
    USplineComponent* SplineComponent; // 0x280
    FVector SplineLinkStart; // 0x288
    FVector SplineLinkEnd; // 0x294
    char pad_2a0[0x10];
    static USplineNavLinkComponent* StaticClass();
    void RegisterNavLink();
}; // Size: 0x2b0
#pragma pack(pop)
