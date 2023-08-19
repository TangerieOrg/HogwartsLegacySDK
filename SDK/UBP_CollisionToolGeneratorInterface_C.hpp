#pragma once
#include <cstdint>
#include "UInterface.hpp"
class USplineComponent;
#pragma pack(push, 1)
class UBP_CollisionToolGeneratorInterface_C : public UInterface {
public:
    static UBP_CollisionToolGeneratorInterface_C* StaticClass();
    void Request_Destroy_Spline_Helper(USplineComponent* SplineHelper, bool& Success);
}; // Size: 0x28
#pragma pack(pop)
