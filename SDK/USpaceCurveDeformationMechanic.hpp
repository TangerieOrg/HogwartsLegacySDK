#pragma once
#include <cstdint>
#include "UInteractionMechanic.hpp"
class USingleClickInputBehavior;
class UTransformGizmo;
class UMouseHoverBehavior;
class USpaceCurveDeformationMechanicPropertySet;
class APreviewGeometryActor;
class UPointSetComponent;
class UTransformProxy;
class ULineSetComponent;
#pragma pack(push, 1)
class USpaceCurveDeformationMechanic : public UInteractionMechanic {
public:
    char pad_30[0x10];
    USingleClickInputBehavior* ClickBehavior; // 0x40
    UMouseHoverBehavior* HoverBehavior; // 0x48
    char pad_50[0x18];
    USpaceCurveDeformationMechanicPropertySet* TransformProperties; // 0x68
    char pad_70[0xf8];
    APreviewGeometryActor* PreviewGeometryActor; // 0x168
    UPointSetComponent* RenderPoints; // 0x170
    ULineSetComponent* RenderSegments; // 0x178
    char pad_180[0x38];
    UTransformProxy* PointTransformProxy; // 0x1b8
    UTransformGizmo* PointTransformGizmo; // 0x1c0
    char pad_1c8[0xe8];
    static USpaceCurveDeformationMechanic* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
