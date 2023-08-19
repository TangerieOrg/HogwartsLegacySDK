#pragma once
#include <cstdint>
#include "ESpaceCurveControlPointFalloffType.hpp"
#include "ESpaceCurveControlPointOriginMode.hpp"
#include "ESpaceCurveControlPointTransformMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet {
public:
    ESpaceCurveControlPointTransformMode TransformMode; // 0x60
    ESpaceCurveControlPointOriginMode TransformOrigin; // 0x64
    float Softness; // 0x68
    ESpaceCurveControlPointFalloffType SoftFalloff; // 0x6c
    static USpaceCurveDeformationMechanicPropertySet* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
