#pragma once
#include <cstdint>
#include "UInteractionMechanic.hpp"
class UPolygonSelectionMechanicProperties;
class APreviewGeometryActor;
class UTriangleSetComponent;
class UMaterialInterface;
#pragma pack(push, 1)
class UPolygonSelectionMechanic : public UInteractionMechanic {
public:
    char pad_30[0x20];
    UPolygonSelectionMechanicProperties* Properties; // 0x50
    char pad_58[0x4c8];
    APreviewGeometryActor* PreviewGeometryActor; // 0x520
    UTriangleSetComponent* DrawnTriangleSetComponent; // 0x528
    char pad_530[0x50];
    UMaterialInterface* HighlightedFaceMaterial; // 0x580
    char pad_588[0x2a8];
    static UPolygonSelectionMechanic* StaticClass();
}; // Size: 0x830
#pragma pack(pop)
