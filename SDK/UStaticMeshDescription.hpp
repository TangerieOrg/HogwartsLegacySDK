#pragma once
#include <cstdint>
#include "FPolygonGroupID.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVertexInstanceID.hpp"
#include "UMeshDescriptionBase.hpp"
struct FPolygonID;
#pragma pack(push, 1)
class UStaticMeshDescription : public UMeshDescriptionBase {
public:
    static UStaticMeshDescription* StaticClass();
    void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex);
    void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName);
    FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex);
    void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ);
}; // Size: 0x390
#pragma pack(pop)
