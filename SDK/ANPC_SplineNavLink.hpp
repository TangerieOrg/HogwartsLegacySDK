#pragma once
#include <cstdint>
#include "ANPC_Spline.hpp"
#include "FNPC_JumpSplineData.hpp"
class USplineNavLinkComponent;
#pragma pack(push, 1)
class ANPC_SplineNavLink : public ANPC_Spline {
public:
    USplineNavLinkComponent* NavLinkComponent; // 0x268
    FNPC_JumpSplineData JSData; // 0x270
    static ANPC_SplineNavLink* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
