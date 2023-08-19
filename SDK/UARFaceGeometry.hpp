#pragma once
#include <cstdint>
#include "EAREye.hpp"
#include "EARFaceBlendShape.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UARTrackedGeometry.hpp"
#pragma pack(push, 1)
class UARFaceGeometry : public UARTrackedGeometry {
public:
    char pad_100[0x4];
    bool bIsTracked; // 0x104
    char pad_105[0x8b];
    FTransform LeftEyeTransform; // 0x190
    FTransform RightEyeTransform; // 0x1c0
    static UARFaceGeometry* StaticClass();
    FTransform GetWorldSpaceEyeTransform(EAREye Eye);
    FTransform GetLocalSpaceEyeTransform(EAREye Eye);
    float GetBlendShapeValue(EARFaceBlendShape BlendShape);
    void GetBlendShapes();
}; // Size: 0x1f0
#pragma pack(pop)
