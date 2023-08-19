#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class USplineComponent;
#pragma pack(push, 1)
class USceneActionState_SlaveToSpline : public USceneRigObjectActionState {
public:
    USplineComponent* SplineComponent; // 0x70
    static USceneActionState_SlaveToSpline* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
