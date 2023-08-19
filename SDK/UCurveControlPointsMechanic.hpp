#pragma once
#include <cstdint>
#include "UInteractionMechanic.hpp"
class USingleClickInputBehavior;
class UTransformGizmo;
class UMouseHoverBehavior;
class APreviewGeometryActor;
class UPointSetComponent;
class UTransformProxy;
class ULineSetComponent;
#pragma pack(push, 1)
class UCurveControlPointsMechanic : public UInteractionMechanic {
public:
    char pad_30[0x10];
    USingleClickInputBehavior* ClickBehavior; // 0x40
    UMouseHoverBehavior* HoverBehavior; // 0x48
    char pad_50[0x498];
    APreviewGeometryActor* PreviewGeometryActor; // 0x4e8
    UPointSetComponent* DrawnControlPoints; // 0x4f0
    ULineSetComponent* DrawnControlSegments; // 0x4f8
    UPointSetComponent* PreviewPoint; // 0x500
    ULineSetComponent* PreviewSegment; // 0x508
    char pad_510[0x78];
    UTransformProxy* PointTransformProxy; // 0x588
    UTransformGizmo* PointTransformGizmo; // 0x590
    char pad_598[0xb8];
    static UCurveControlPointsMechanic* StaticClass();
}; // Size: 0x650
#pragma pack(pop)
