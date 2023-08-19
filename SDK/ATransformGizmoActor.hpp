#pragma once
#include <cstdint>
#include "AGizmoActor.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class ATransformGizmoActor : public AGizmoActor {
public:
    UPrimitiveComponent* TranslateX; // 0x248
    UPrimitiveComponent* TranslateY; // 0x250
    UPrimitiveComponent* TranslateZ; // 0x258
    UPrimitiveComponent* TranslateYZ; // 0x260
    UPrimitiveComponent* TranslateXZ; // 0x268
    UPrimitiveComponent* TranslateXY; // 0x270
    UPrimitiveComponent* RotateX; // 0x278
    UPrimitiveComponent* RotateY; // 0x280
    UPrimitiveComponent* RotateZ; // 0x288
    UPrimitiveComponent* UniformScale; // 0x290
    UPrimitiveComponent* AxisScaleX; // 0x298
    UPrimitiveComponent* AxisScaleY; // 0x2a0
    UPrimitiveComponent* AxisScaleZ; // 0x2a8
    UPrimitiveComponent* PlaneScaleYZ; // 0x2b0
    UPrimitiveComponent* PlaneScaleXZ; // 0x2b8
    UPrimitiveComponent* PlaneScaleXY; // 0x2c0
    static ATransformGizmoActor* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
