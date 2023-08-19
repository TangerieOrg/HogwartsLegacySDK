#include "EInsetPolygonsMode.hpp"
#include "EMeshModificationType.hpp"
#include "EMeshTopologyChange.hpp"
#include "ETriangleTessellationMode.hpp"
#include "FAttributesForEdge.hpp"
#include "FAttributesForVertex.hpp"
#include "FAttributesForVertexInstance.hpp"
#include "FBox.hpp"
#include "FBoxSphereBounds.hpp"
#include "FChangeVertexInstancesForPolygon.hpp"
#include "FEdgeID.hpp"
#include "FEdgeToCreate.hpp"
#include "FPlane.hpp"
#include "FPolygonGroupForPolygon.hpp"
#include "FPolygonGroupID.hpp"
#include "FPolygonGroupToCreate.hpp"
#include "FPolygonID.hpp"
#include "FPolygonToCreate.hpp"
#include "FPolygonToSplit.hpp"
#include "FSubdivisionLimitData.hpp"
#include "FTriangleID.hpp"
#include "FVector.hpp"
#include "FVertexAttributesForPolygon.hpp"
#include "FVertexID.hpp"
#include "FVertexInstanceID.hpp"
#include "FVertexInstanceToCreate.hpp"
#include "FVertexToCreate.hpp"
#include "FVertexToMove.hpp"
#include "UEditableMesh.hpp"
#include "UEditableMeshAdapter.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
void UEditableMesh::SplitPolygons(TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SplitPolygons"));
    struct Params_SplitPolygons {
        TArray<FPolygonToSplit> PolygonsToSplit; // 0x0
        TArray<FEdgeID> OutNewEdgeIDs; // 0x10
    }; // Size: 0x20
    Params_SplitPolygons params{};
    params.PolygonsToSplit = (TArray<FPolygonToSplit>)PolygonsToSplit;
    params.OutNewEdgeIDs = (TArray<FEdgeID>)OutNewEdgeIDs;
    ProcessEvent(func, &params);
    PolygonsToSplit = params.PolygonsToSplit;
    OutNewEdgeIDs = params.OutNewEdgeIDs;
}
FEdgeID UEditableMesh::MakeEdgeID(int32_t EdgeIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.MakeEdgeID"));
    struct Params_MakeEdgeID {
        int32_t EdgeIndex; // 0x0
        FEdgeID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_MakeEdgeID params{};
    params.EdgeIndex = (int32_t)EdgeIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FEdgeID)params.ReturnValue;
}
UEditableMesh* UEditableMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/EditableMesh.EditableMesh");
    return (UEditableMesh*)res;
}
void UEditableMesh::TriangulatePolygons(TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.TriangulatePolygons"));
    struct Params_TriangulatePolygons {
        TArray<FPolygonID> PolygonIDs; // 0x0
        TArray<FPolygonID> OutNewTrianglePolygons; // 0x10
    }; // Size: 0x20
    Params_TriangulatePolygons params{};
    params.PolygonIDs = (TArray<FPolygonID>)PolygonIDs;
    params.OutNewTrianglePolygons = (TArray<FPolygonID>)OutNewTrianglePolygons;
    ProcessEvent(func, &params);
    PolygonIDs = params.PolygonIDs;
    OutNewTrianglePolygons = params.OutNewTrianglePolygons;
}
bool UEditableMesh::IsValidPolygon(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsValidPolygon"));
    struct Params_IsValidPolygon {
        FPolygonID PolygonID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsValidPolygon params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEditableMesh::TessellatePolygons(TArray<FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.TessellatePolygons"));
    struct Params_TessellatePolygons {
        TArray<FPolygonID> PolygonIDs; // 0x0
        ETriangleTessellationMode TriangleTessellationMode; // 0x10
        char pad_11[0x7];
        TArray<FPolygonID> OutNewPolygonIDs; // 0x18
    }; // Size: 0x28
    Params_TessellatePolygons params{};
    params.PolygonIDs = (TArray<FPolygonID>)PolygonIDs;
    params.TriangleTessellationMode = (ETriangleTessellationMode)TriangleTessellationMode;
    params.OutNewPolygonIDs = (TArray<FPolygonID>)OutNewPolygonIDs;
    ProcessEvent(func, &params);
    PolygonIDs = params.PolygonIDs;
    OutNewPolygonIDs = params.OutNewPolygonIDs;
}
void UEditableMesh::GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexAdjacentVertices"));
    struct Params_GetVertexAdjacentVertices {
        FVertexID VertexID; // 0x0
        char pad_4[0x4];
        TArray<FVertexID> OutAdjacentVertexIDs; // 0x8
    }; // Size: 0x18
    Params_GetVertexAdjacentVertices params{};
    params.VertexID = (FVertexID)VertexID;
    params.OutAdjacentVertexIDs = (TArray<FVertexID>)OutAdjacentVertexIDs;
    ProcessEvent(func, &params);
    OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
}
void UEditableMesh::WeldVertices(TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.WeldVertices"));
    struct Params_WeldVertices {
        TArray<FVertexID> VertexIDs; // 0x0
        FVertexID OutNewVertexID; // 0x10
    }; // Size: 0x14
    Params_WeldVertices params{};
    params.VertexIDs = (TArray<FVertexID>)VertexIDs;
    params.OutNewVertexID = (FVertexID)OutNewVertexID;
    ProcessEvent(func, &params);
    VertexIDs = params.VertexIDs;
    OutNewVertexID = params.OutNewVertexID;
}
bool UEditableMesh::IsValidPolygonGroup(FPolygonGroupID PolygonGroupID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsValidPolygonGroup"));
    struct Params_IsValidPolygonGroup {
        FPolygonGroupID PolygonGroupID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsValidPolygonGroup params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEditableMesh::TryToRemoveVertex(FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.TryToRemoveVertex"));
    struct Params_TryToRemoveVertex {
        FVertexID VertexID; // 0x0
        bool bOutWasVertexRemoved; // 0x4
        char pad_5[0x3];
        FEdgeID OutNewEdgeID; // 0x8
    }; // Size: 0xc
    Params_TryToRemoveVertex params{};
    params.VertexID = (FVertexID)VertexID;
    params.bOutWasVertexRemoved = (bool)bOutWasVertexRemoved;
    params.OutNewEdgeID = (FEdgeID)OutNewEdgeID;
    ProcessEvent(func, &params);
    bOutWasVertexRemoved = params.bOutWasVertexRemoved;
    OutNewEdgeID = params.OutNewEdgeID;
}
void UEditableMesh::TryToRemovePolygonEdge(FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.TryToRemovePolygonEdge"));
    struct Params_TryToRemovePolygonEdge {
        FEdgeID EdgeID; // 0x0
        bool bOutWasEdgeRemoved; // 0x4
        char pad_5[0x3];
        FPolygonID OutNewPolygonID; // 0x8
    }; // Size: 0xc
    Params_TryToRemovePolygonEdge params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.bOutWasEdgeRemoved = (bool)bOutWasEdgeRemoved;
    params.OutNewPolygonID = (FPolygonID)OutNewPolygonID;
    ProcessEvent(func, &params);
    bOutWasEdgeRemoved = params.bOutWasEdgeRemoved;
    OutNewPolygonID = params.OutNewPolygonID;
}
void UEditableMesh::StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.StartModification"));
    struct Params_StartModification {
        EMeshModificationType MeshModificationType; // 0x0
        EMeshTopologyChange MeshTopologyChange; // 0x1
    }; // Size: 0x2
    Params_StartModification params{};
    params.MeshModificationType = (EMeshModificationType)MeshModificationType;
    params.MeshTopologyChange = (EMeshTopologyChange)MeshTopologyChange;
    ProcessEvent(func, &params);
}
FPolygonID UEditableMesh::MakePolygonID(int32_t PolygonIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.MakePolygonID"));
    struct Params_MakePolygonID {
        int32_t PolygonIndex; // 0x0
        FPolygonID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_MakePolygonID params{};
    params.PolygonIndex = (int32_t)PolygonIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPolygonID)params.ReturnValue;
}
UEditableMesh* UEditableMesh::RevertInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.RevertInstance"));
    struct Params_RevertInstance {
        UEditableMesh* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_RevertInstance params{};
    ProcessEvent(func, &params);
    return (UEditableMesh*)params.ReturnValue;
}
void UEditableMesh::SplitPolygonalMesh(FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SplitPolygonalMesh"));
    struct Params_SplitPolygonalMesh {
        FPlane InPlane; // 0x0
        TArray<FPolygonID> PolygonIDs1; // 0x10
        TArray<FPolygonID> PolygonIDs2; // 0x20
        TArray<FEdgeID> BoundaryIDs; // 0x30
    }; // Size: 0x40
    Params_SplitPolygonalMesh params{};
    params.InPlane = (FPlane)InPlane;
    params.PolygonIDs1 = (TArray<FPolygonID>)PolygonIDs1;
    params.PolygonIDs2 = (TArray<FPolygonID>)PolygonIDs2;
    params.BoundaryIDs = (TArray<FEdgeID>)BoundaryIDs;
    ProcessEvent(func, &params);
    PolygonIDs2 = params.PolygonIDs2;
    InPlane = params.InPlane;
    PolygonIDs1 = params.PolygonIDs1;
    BoundaryIDs = params.BoundaryIDs;
}
void UEditableMesh::SplitEdge(FEdgeID EdgeID, TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SplitEdge"));
    struct Params_SplitEdge {
        FEdgeID EdgeID; // 0x0
        char pad_4[0x4];
        TArray<float> Splits; // 0x8
        TArray<FVertexID> OutNewVertexIDs; // 0x18
    }; // Size: 0x28
    Params_SplitEdge params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.Splits = (TArray<float>)Splits;
    params.OutNewVertexIDs = (TArray<FVertexID>)OutNewVertexIDs;
    ProcessEvent(func, &params);
    Splits = params.Splits;
    OutNewVertexIDs = params.OutNewVertexIDs;
}
void UEditableMesh::SetVerticesCornerSharpness(TArray<FVertexID>& VertexIDs, TArray<float>& VerticesNewCornerSharpness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetVerticesCornerSharpness"));
    struct Params_SetVerticesCornerSharpness {
        TArray<FVertexID> VertexIDs; // 0x0
        TArray<float> VerticesNewCornerSharpness; // 0x10
    }; // Size: 0x20
    Params_SetVerticesCornerSharpness params{};
    params.VertexIDs = (TArray<FVertexID>)VertexIDs;
    params.VerticesNewCornerSharpness = (TArray<float>)VerticesNewCornerSharpness;
    ProcessEvent(func, &params);
    VertexIDs = params.VertexIDs;
    VerticesNewCornerSharpness = params.VerticesNewCornerSharpness;
}
void UEditableMesh::SetVerticesAttributes(TArray<FAttributesForVertex>& AttributesForVertices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetVerticesAttributes"));
    struct Params_SetVerticesAttributes {
        TArray<FAttributesForVertex> AttributesForVertices; // 0x0
    }; // Size: 0x10
    Params_SetVerticesAttributes params{};
    params.AttributesForVertices = (TArray<FAttributesForVertex>)AttributesForVertices;
    ProcessEvent(func, &params);
    AttributesForVertices = params.AttributesForVertices;
}
void UEditableMesh::SetVertexInstancesAttributes(TArray<FAttributesForVertexInstance>& AttributesForVertexInstances) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetVertexInstancesAttributes"));
    struct Params_SetVertexInstancesAttributes {
        TArray<FAttributesForVertexInstance> AttributesForVertexInstances; // 0x0
    }; // Size: 0x10
    Params_SetVertexInstancesAttributes params{};
    params.AttributesForVertexInstances = (TArray<FAttributesForVertexInstance>)AttributesForVertexInstances;
    ProcessEvent(func, &params);
    AttributesForVertexInstances = params.AttributesForVertexInstances;
}
void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(FPlane& InPlane, TArray<FPolygonID>& OutPolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane"));
    struct Params_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane {
        FPlane InPlane; // 0x0
        TArray<FPolygonID> OutPolygons; // 0x10
    }; // Size: 0x20
    Params_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane params{};
    params.InPlane = (FPlane)InPlane;
    params.OutPolygons = (TArray<FPolygonID>)OutPolygons;
    ProcessEvent(func, &params);
    InPlane = params.InPlane;
    OutPolygons = params.OutPolygons;
}
void UEditableMesh::SetTextureCoordinateCount(int32_t NumTexCoords) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetTextureCoordinateCount"));
    struct Params_SetTextureCoordinateCount {
        int32_t NumTexCoords; // 0x0
    }; // Size: 0x4
    Params_SetTextureCoordinateCount params{};
    params.NumTexCoords = (int32_t)NumTexCoords;
    ProcessEvent(func, &params);
}
void UEditableMesh::SetSubdivisionCount(int32_t NewSubdivisionCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetSubdivisionCount"));
    struct Params_SetSubdivisionCount {
        int32_t NewSubdivisionCount; // 0x0
    }; // Size: 0x4
    Params_SetSubdivisionCount params{};
    params.NewSubdivisionCount = (int32_t)NewSubdivisionCount;
    ProcessEvent(func, &params);
}
void UEditableMesh::SetPolygonsVertexAttributes(TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetPolygonsVertexAttributes"));
    struct Params_SetPolygonsVertexAttributes {
        TArray<FVertexAttributesForPolygon> VertexAttributesForPolygons; // 0x0
    }; // Size: 0x10
    Params_SetPolygonsVertexAttributes params{};
    params.VertexAttributesForPolygons = (TArray<FVertexAttributesForPolygon>)VertexAttributesForPolygons;
    ProcessEvent(func, &params);
    VertexAttributesForPolygons = params.VertexAttributesForPolygons;
}
bool UEditableMesh::IsCommittedAsInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsCommittedAsInstance"));
    struct Params_IsCommittedAsInstance {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCommittedAsInstance params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEditableMesh::SetEdgesHardnessAutomatically(TArray<FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetEdgesHardnessAutomatically"));
    struct Params_SetEdgesHardnessAutomatically {
        TArray<FEdgeID> EdgeIDs; // 0x0
        float MaxDotProductForSoftEdge; // 0x10
    }; // Size: 0x14
    Params_SetEdgesHardnessAutomatically params{};
    params.EdgeIDs = (TArray<FEdgeID>)EdgeIDs;
    params.MaxDotProductForSoftEdge = (float)MaxDotProductForSoftEdge;
    ProcessEvent(func, &params);
    EdgeIDs = params.EdgeIDs;
}
void UEditableMesh::SetEdgesHardness(TArray<FEdgeID>& EdgeIDs, TArray<bool>& EdgesNewIsHard) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetEdgesHardness"));
    struct Params_SetEdgesHardness {
        TArray<FEdgeID> EdgeIDs; // 0x0
        TArray<bool> EdgesNewIsHard; // 0x10
    }; // Size: 0x20
    Params_SetEdgesHardness params{};
    params.EdgeIDs = (TArray<FEdgeID>)EdgeIDs;
    params.EdgesNewIsHard = (TArray<bool>)EdgesNewIsHard;
    ProcessEvent(func, &params);
    EdgeIDs = params.EdgeIDs;
    EdgesNewIsHard = params.EdgesNewIsHard;
}
void UEditableMesh::SetEdgesCreaseSharpness(TArray<FEdgeID>& EdgeIDs, TArray<float>& EdgesNewCreaseSharpness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetEdgesCreaseSharpness"));
    struct Params_SetEdgesCreaseSharpness {
        TArray<FEdgeID> EdgeIDs; // 0x0
        TArray<float> EdgesNewCreaseSharpness; // 0x10
    }; // Size: 0x20
    Params_SetEdgesCreaseSharpness params{};
    params.EdgeIDs = (TArray<FEdgeID>)EdgeIDs;
    params.EdgesNewCreaseSharpness = (TArray<float>)EdgesNewCreaseSharpness;
    ProcessEvent(func, &params);
    EdgeIDs = params.EdgeIDs;
    EdgesNewCreaseSharpness = params.EdgesNewCreaseSharpness;
}
bool UEditableMesh::IsValidVertex(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsValidVertex"));
    struct Params_IsValidVertex {
        FVertexID VertexID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsValidVertex params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FEdgeID UEditableMesh::InvalidEdgeID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.InvalidEdgeID"));
    struct Params_InvalidEdgeID {
        FEdgeID ReturnValue; // 0x0
    }; // Size: 0x4
    Params_InvalidEdgeID params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FEdgeID)params.ReturnValue;
}
bool UEditableMesh::IsCommitted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsCommitted"));
    struct Params_IsCommitted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCommitted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEditableMesh::SetEdgesAttributes(TArray<FAttributesForEdge>& AttributesForEdges) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetEdgesAttributes"));
    struct Params_SetEdgesAttributes {
        TArray<FAttributesForEdge> AttributesForEdges; // 0x0
    }; // Size: 0x10
    Params_SetEdgesAttributes params{};
    params.AttributesForEdges = (TArray<FAttributesForEdge>)AttributesForEdges;
    ProcessEvent(func, &params);
    AttributesForEdges = params.AttributesForEdges;
}
FVertexID UEditableMesh::GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexInstanceVertex"));
    struct Params_GetVertexInstanceVertex {
        FVertexInstanceID VertexInstanceID; // 0x0
        FVertexID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetVertexInstanceVertex params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    ProcessEvent(func, &params);
    return (FVertexID)params.ReturnValue;
}
void UEditableMesh::SetAllowUndo(bool bInAllowUndo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetAllowUndo"));
    struct Params_SetAllowUndo {
        bool bInAllowUndo; // 0x0
    }; // Size: 0x1
    Params_SetAllowUndo params{};
    params.bInAllowUndo = (bool)bInAllowUndo;
    ProcessEvent(func, &params);
}
void UEditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetAllowSpatialDatabase"));
    struct Params_SetAllowSpatialDatabase {
        bool bInAllowSpatialDatabase; // 0x0
    }; // Size: 0x1
    Params_SetAllowSpatialDatabase params{};
    params.bInAllowSpatialDatabase = (bool)bInAllowSpatialDatabase;
    ProcessEvent(func, &params);
}
void UEditableMesh::SetAllowCompact(bool bInAllowCompact) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SetAllowCompact"));
    struct Params_SetAllowCompact {
        bool bInAllowCompact; // 0x0
    }; // Size: 0x1
    Params_SetAllowCompact params{};
    params.bInAllowCompact = (bool)bInAllowCompact;
    ProcessEvent(func, &params);
}
FPolygonID UEditableMesh::InvalidPolygonID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.InvalidPolygonID"));
    struct Params_InvalidPolygonID {
        FPolygonID ReturnValue; // 0x0
    }; // Size: 0x4
    Params_InvalidPolygonID params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPolygonID)params.ReturnValue;
}
int32_t UEditableMesh::GetVertexConnectedEdgeCount(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdgeCount"));
    struct Params_GetVertexConnectedEdgeCount {
        FVertexID VertexID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetVertexConnectedEdgeCount params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(FVector LineSegmentStart, FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment"));
    struct Params_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment {
        FVector LineSegmentStart; // 0x0
        FVector LineSegmentEnd; // 0xc
        TArray<FPolygonID> OutPolygons; // 0x18
    }; // Size: 0x28
    Params_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment params{};
    params.LineSegmentStart = (FVector)LineSegmentStart;
    params.LineSegmentEnd = (FVector)LineSegmentEnd;
    params.OutPolygons = (TArray<FPolygonID>)OutPolygons;
    ProcessEvent(func, &params);
    OutPolygons = params.OutPolygons;
}
FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(FPolygonID PolygonID, int32_t PolygonVertexNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance"));
    struct Params_GetPolygonPerimeterVertexInstance {
        FPolygonID PolygonID; // 0x0
        int32_t PolygonVertexNumber; // 0x4
        FVertexInstanceID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPolygonPerimeterVertexInstance params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.PolygonVertexNumber = (int32_t)PolygonVertexNumber;
    ProcessEvent(func, &params);
    return (FVertexInstanceID)params.ReturnValue;
}
void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume"));
    struct Params_SearchSpatialDatabaseForPolygonsInVolume {
        TArray<FPlane> Planes; // 0x0
        TArray<FPolygonID> OutPolygons; // 0x10
    }; // Size: 0x20
    Params_SearchSpatialDatabaseForPolygonsInVolume params{};
    params.Planes = (TArray<FPlane>)Planes;
    params.OutPolygons = (TArray<FPolygonID>)OutPolygons;
    ProcessEvent(func, &params);
    Planes = params.Planes;
    OutPolygons = params.OutPolygons;
}
bool UEditableMesh::IsSpatialDatabaseAllowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsSpatialDatabaseAllowed"));
    struct Params_IsSpatialDatabaseAllowed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSpatialDatabaseAllowed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEditableMesh::Revert() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.Revert"));
    struct Params_Revert {
    }; // Size: 0x0
    Params_Revert params{};
    ProcessEvent(func, &params);
}
void UEditableMesh::GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons"));
    struct Params_GetVertexInstanceConnectedPolygons {
        FVertexInstanceID VertexInstanceID; // 0x0
        char pad_4[0x4];
        TArray<FPolygonID> OutConnectedPolygonIDs; // 0x8
    }; // Size: 0x18
    Params_GetVertexInstanceConnectedPolygons params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    params.OutConnectedPolygonIDs = (TArray<FPolygonID>)OutConnectedPolygonIDs;
    ProcessEvent(func, &params);
    OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}
void UEditableMesh::RebuildRenderMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.RebuildRenderMesh"));
    struct Params_RebuildRenderMesh {
    }; // Size: 0x0
    Params_RebuildRenderMesh params{};
    ProcessEvent(func, &params);
}
void UEditableMesh::QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.QuadrangulateMesh"));
    struct Params_QuadrangulateMesh {
        TArray<FPolygonID> OutNewPolygonIDs; // 0x0
    }; // Size: 0x10
    Params_QuadrangulateMesh params{};
    params.OutNewPolygonIDs = (TArray<FPolygonID>)OutNewPolygonIDs;
    ProcessEvent(func, &params);
    OutNewPolygonIDs = params.OutNewPolygonIDs;
}
int32_t UEditableMesh::GetVertexInstanceCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexInstanceCount"));
    struct Params_GetVertexInstanceCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVertexInstanceCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UEditableMesh::IsCompactAllowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsCompactAllowed"));
    struct Params_IsCompactAllowed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCompactAllowed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FPolygonGroupID UEditableMesh::MakePolygonGroupID(int32_t PolygonGroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.MakePolygonGroupID"));
    struct Params_MakePolygonGroupID {
        int32_t PolygonGroupIndex; // 0x0
        FPolygonGroupID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_MakePolygonGroupID params{};
    params.PolygonGroupIndex = (int32_t)PolygonGroupIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPolygonGroupID)params.ReturnValue;
}
void UEditableMesh::PropagateInstanceChanges() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.PropagateInstanceChanges"));
    struct Params_PropagateInstanceChanges {
    }; // Size: 0x0
    Params_PropagateInstanceChanges params{};
    ProcessEvent(func, &params);
}
void UEditableMesh::MoveVertices(TArray<FVertexToMove>& VerticesToMove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.MoveVertices"));
    struct Params_MoveVertices {
        TArray<FVertexToMove> VerticesToMove; // 0x0
    }; // Size: 0x10
    Params_MoveVertices params{};
    params.VerticesToMove = (TArray<FVertexToMove>)VerticesToMove;
    ProcessEvent(func, &params);
    VerticesToMove = params.VerticesToMove;
}
FVertexID UEditableMesh::MakeVertexID(int32_t VertexIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.MakeVertexID"));
    struct Params_MakeVertexID {
        int32_t VertexIndex; // 0x0
        FVertexID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_MakeVertexID params{};
    params.VertexIndex = (int32_t)VertexIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVertexID)params.ReturnValue;
}
void UEditableMesh::InitializeAdapters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.InitializeAdapters"));
    struct Params_InitializeAdapters {
    }; // Size: 0x0
    Params_InitializeAdapters params{};
    ProcessEvent(func, &params);
}
bool UEditableMesh::IsValidEdge(FEdgeID EdgeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsValidEdge"));
    struct Params_IsValidEdge {
        FEdgeID EdgeID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsValidEdge params{};
    params.EdgeID = (FEdgeID)EdgeID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEditableMesh::IsUndoAllowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsUndoAllowed"));
    struct Params_IsUndoAllowed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUndoAllowed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEditableMesh::AnyChangesToUndo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.AnyChangesToUndo"));
    struct Params_AnyChangesToUndo {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AnyChangesToUndo params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEditableMesh::CreateVertices(TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.CreateVertices"));
    struct Params_CreateVertices {
        TArray<FVertexToCreate> VerticesToCreate; // 0x0
        TArray<FVertexID> OutNewVertexIDs; // 0x10
    }; // Size: 0x20
    Params_CreateVertices params{};
    params.VerticesToCreate = (TArray<FVertexToCreate>)VerticesToCreate;
    params.OutNewVertexIDs = (TArray<FVertexID>)OutNewVertexIDs;
    ProcessEvent(func, &params);
    VerticesToCreate = params.VerticesToCreate;
    OutNewVertexIDs = params.OutNewVertexIDs;
}
bool UEditableMesh::IsPreviewingSubdivisions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsPreviewingSubdivisions"));
    struct Params_IsPreviewingSubdivisions {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPreviewingSubdivisions params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEditableMesh::IsOrphanedVertex(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsOrphanedVertex"));
    struct Params_IsOrphanedVertex {
        FVertexID VertexID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsOrphanedVertex params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTriangleID UEditableMesh::GetPolygonTriangulatedTriangle(FPolygonID PolygonID, int32_t PolygonTriangleNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle"));
    struct Params_GetPolygonTriangulatedTriangle {
        FPolygonID PolygonID; // 0x0
        int32_t PolygonTriangleNumber; // 0x4
        FTriangleID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPolygonTriangulatedTriangle params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.PolygonTriangleNumber = (int32_t)PolygonTriangleNumber;
    ProcessEvent(func, &params);
    return (FTriangleID)params.ReturnValue;
}
bool UEditableMesh::IsBeingModified() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.IsBeingModified"));
    struct Params_IsBeingModified {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBeingModified params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVertexID UEditableMesh::InvalidVertexID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.InvalidVertexID"));
    struct Params_InvalidVertexID {
        FVertexID ReturnValue; // 0x0
    }; // Size: 0x4
    Params_InvalidVertexID params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVertexID)params.ReturnValue;
}
FPolygonGroupID UEditableMesh::InvalidPolygonGroupID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.InvalidPolygonGroupID"));
    struct Params_InvalidPolygonGroupID {
        FPolygonGroupID ReturnValue; // 0x0
    }; // Size: 0x4
    Params_InvalidPolygonGroupID params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPolygonGroupID)params.ReturnValue;
}
FEdgeID UEditableMesh::GetVertexPairEdge(FVertexID VertexID, FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexPairEdge"));
    struct Params_GetVertexPairEdge {
        FVertexID VertexID; // 0x0
        FVertexID NextVertexID; // 0x4
        bool bOutEdgeWindingIsReversed; // 0x8
        char pad_9[0x3];
        FEdgeID ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetVertexPairEdge params{};
    params.VertexID = (FVertexID)VertexID;
    params.NextVertexID = (FVertexID)NextVertexID;
    params.bOutEdgeWindingIsReversed = (bool)bOutEdgeWindingIsReversed;
    ProcessEvent(func, &params);
    bOutEdgeWindingIsReversed = params.bOutEdgeWindingIsReversed;
    return (FEdgeID)params.ReturnValue;
}
void UEditableMesh::InsetPolygons(TArray<FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.InsetPolygons"));
    struct Params_InsetPolygons {
        TArray<FPolygonID> PolygonIDs; // 0x0
        float InsetFixedDistance; // 0x10
        float InsetProgressTowardCenter; // 0x14
        EInsetPolygonsMode Mode; // 0x18
        char pad_19[0x7];
        TArray<FPolygonID> OutNewCenterPolygonIDs; // 0x20
        TArray<FPolygonID> OutNewSidePolygonIDs; // 0x30
    }; // Size: 0x40
    Params_InsetPolygons params{};
    params.PolygonIDs = (TArray<FPolygonID>)PolygonIDs;
    params.InsetFixedDistance = (float)InsetFixedDistance;
    params.InsetProgressTowardCenter = (float)InsetProgressTowardCenter;
    params.Mode = (EInsetPolygonsMode)Mode;
    params.OutNewCenterPolygonIDs = (TArray<FPolygonID>)OutNewCenterPolygonIDs;
    params.OutNewSidePolygonIDs = (TArray<FPolygonID>)OutNewSidePolygonIDs;
    ProcessEvent(func, &params);
    PolygonIDs = params.PolygonIDs;
    OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
    OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
}
void UEditableMesh::ExtendVertices(TArray<FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ExtendVertices"));
    struct Params_ExtendVertices {
        TArray<FVertexID> VertexIDs; // 0x0
        bool bOnlyExtendClosestEdge; // 0x10
        char pad_11[0x3];
        FVector ReferencePosition; // 0x14
        TArray<FVertexID> OutNewExtendedVertexIDs; // 0x20
    }; // Size: 0x30
    Params_ExtendVertices params{};
    params.VertexIDs = (TArray<FVertexID>)VertexIDs;
    params.bOnlyExtendClosestEdge = (bool)bOnlyExtendClosestEdge;
    params.ReferencePosition = (FVector)ReferencePosition;
    params.OutNewExtendedVertexIDs = (TArray<FVertexID>)OutNewExtendedVertexIDs;
    ProcessEvent(func, &params);
    VertexIDs = params.VertexIDs;
    OutNewExtendedVertexIDs = params.OutNewExtendedVertexIDs;
}
int32_t UEditableMesh::GetVertexInstanceConnectedPolygonCount(FVertexInstanceID VertexInstanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount"));
    struct Params_GetVertexInstanceConnectedPolygonCount {
        FVertexInstanceID VertexInstanceID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetVertexInstanceConnectedPolygonCount params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::InsertEdgeLoop(FEdgeID EdgeID, TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.InsertEdgeLoop"));
    struct Params_InsertEdgeLoop {
        FEdgeID EdgeID; // 0x0
        char pad_4[0x4];
        TArray<float> Splits; // 0x8
        TArray<FEdgeID> OutNewEdgeIDs; // 0x18
    }; // Size: 0x28
    Params_InsertEdgeLoop params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.Splits = (TArray<float>)Splits;
    params.OutNewEdgeIDs = (TArray<FEdgeID>)OutNewEdgeIDs;
    ProcessEvent(func, &params);
    OutNewEdgeIDs = params.OutNewEdgeIDs;
    Splits = params.Splits;
}
FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon"));
    struct Params_GetVertexInstanceConnectedPolygon {
        FVertexInstanceID VertexInstanceID; // 0x0
        int32_t ConnectedPolygonNumber; // 0x4
        FPolygonID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVertexInstanceConnectedPolygon params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    params.ConnectedPolygonNumber = (int32_t)ConnectedPolygonNumber;
    ProcessEvent(func, &params);
    return (FPolygonID)params.ReturnValue;
}
void UEditableMesh::CreateEdges(TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.CreateEdges"));
    struct Params_CreateEdges {
        TArray<FEdgeToCreate> EdgesToCreate; // 0x0
        TArray<FEdgeID> OutNewEdgeIDs; // 0x10
    }; // Size: 0x20
    Params_CreateEdges params{};
    params.EdgesToCreate = (TArray<FEdgeToCreate>)EdgesToCreate;
    params.OutNewEdgeIDs = (TArray<FEdgeID>)OutNewEdgeIDs;
    ProcessEvent(func, &params);
    EdgesToCreate = params.EdgesToCreate;
    OutNewEdgeIDs = params.OutNewEdgeIDs;
}
int32_t UEditableMesh::GetVertexCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexCount"));
    struct Params_GetVertexCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVertexCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexConnectedPolygons"));
    struct Params_GetVertexConnectedPolygons {
        FVertexID VertexID; // 0x0
        char pad_4[0x4];
        TArray<FPolygonID> OutConnectedPolygonIDs; // 0x8
    }; // Size: 0x18
    Params_GetVertexConnectedPolygons params{};
    params.VertexID = (FVertexID)VertexID;
    params.OutConnectedPolygonIDs = (TArray<FPolygonID>)OutConnectedPolygonIDs;
    ProcessEvent(func, &params);
    OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}
void UEditableMesh::GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdges"));
    struct Params_GetVertexConnectedEdges {
        FVertexID VertexID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OutConnectedEdgeIDs; // 0x8
    }; // Size: 0x18
    Params_GetVertexConnectedEdges params{};
    params.VertexID = (FVertexID)VertexID;
    params.OutConnectedEdgeIDs = (TArray<FEdgeID>)OutConnectedEdgeIDs;
    ProcessEvent(func, &params);
    OutConnectedEdgeIDs = params.OutConnectedEdgeIDs;
}
FEdgeID UEditableMesh::GetVertexConnectedEdge(FVertexID VertexID, int32_t ConnectedEdgeNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdge"));
    struct Params_GetVertexConnectedEdge {
        FVertexID VertexID; // 0x0
        int32_t ConnectedEdgeNumber; // 0x4
        FEdgeID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVertexConnectedEdge params{};
    params.VertexID = (FVertexID)VertexID;
    params.ConnectedEdgeNumber = (int32_t)ConnectedEdgeNumber;
    ProcessEvent(func, &params);
    return (FEdgeID)params.ReturnValue;
}
int32_t UEditableMesh::GetTextureCoordinateCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetTextureCoordinateCount"));
    struct Params_GetTextureCoordinateCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTextureCoordinateCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetSubdivisionLimitData"));
    struct Params_GetSubdivisionLimitData {
        FSubdivisionLimitData ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetSubdivisionLimitData params{};
    ProcessEvent(func, &params);
    return (FSubdivisionLimitData)params.ReturnValue;
}
int32_t UEditableMesh::GetSubdivisionCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetSubdivisionCount"));
    struct Params_GetSubdivisionCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSubdivisionCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UEditableMesh::GetPolygonTriangulatedTriangleCount(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount"));
    struct Params_GetPolygonTriangulatedTriangleCount {
        FPolygonID PolygonID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetPolygonTriangulatedTriangleCount params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::GetPolygonPerimeterVertices(FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertices"));
    struct Params_GetPolygonPerimeterVertices {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FVertexID> OutPolygonPerimeterVertexIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonPerimeterVertices params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutPolygonPerimeterVertexIDs = (TArray<FVertexID>)OutPolygonPerimeterVertexIDs;
    ProcessEvent(func, &params);
    OutPolygonPerimeterVertexIDs = params.OutPolygonPerimeterVertexIDs;
}
void UEditableMesh::GetPolygonPerimeterVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances"));
    struct Params_GetPolygonPerimeterVertexInstances {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonPerimeterVertexInstances params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutPolygonPerimeterVertexInstanceIDs = (TArray<FVertexInstanceID>)OutPolygonPerimeterVertexInstanceIDs;
    ProcessEvent(func, &params);
    OutPolygonPerimeterVertexInstanceIDs = params.OutPolygonPerimeterVertexInstanceIDs;
}
int32_t UEditableMesh::GetPolygonPerimeterVertexCount(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount"));
    struct Params_GetPolygonPerimeterVertexCount {
        FPolygonID PolygonID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetPolygonPerimeterVertexCount params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::BevelPolygons(TArray<FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.BevelPolygons"));
    struct Params_BevelPolygons {
        TArray<FPolygonID> PolygonIDs; // 0x0
        float BevelFixedDistance; // 0x10
        float BevelProgressTowardCenter; // 0x14
        TArray<FPolygonID> OutNewCenterPolygonIDs; // 0x18
        TArray<FPolygonID> OutNewSidePolygonIDs; // 0x28
    }; // Size: 0x38
    Params_BevelPolygons params{};
    params.PolygonIDs = (TArray<FPolygonID>)PolygonIDs;
    params.BevelFixedDistance = (float)BevelFixedDistance;
    params.BevelProgressTowardCenter = (float)BevelProgressTowardCenter;
    params.OutNewCenterPolygonIDs = (TArray<FPolygonID>)OutNewCenterPolygonIDs;
    params.OutNewSidePolygonIDs = (TArray<FPolygonID>)OutNewSidePolygonIDs;
    ProcessEvent(func, &params);
    PolygonIDs = params.PolygonIDs;
    OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
    OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
}
FVertexID UEditableMesh::GetPolygonPerimeterVertex(FPolygonID PolygonID, int32_t PolygonVertexNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertex"));
    struct Params_GetPolygonPerimeterVertex {
        FPolygonID PolygonID; // 0x0
        int32_t PolygonVertexNumber; // 0x4
        FVertexID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPolygonPerimeterVertex params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.PolygonVertexNumber = (int32_t)PolygonVertexNumber;
    ProcessEvent(func, &params);
    return (FVertexID)params.ReturnValue;
}
void UEditableMesh::GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdges"));
    struct Params_GetPolygonPerimeterEdges {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OutPolygonPerimeterEdgeIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonPerimeterEdges params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutPolygonPerimeterEdgeIDs = (TArray<FEdgeID>)OutPolygonPerimeterEdgeIDs;
    ProcessEvent(func, &params);
    OutPolygonPerimeterEdgeIDs = params.OutPolygonPerimeterEdgeIDs;
}
int32_t UEditableMesh::GetPolygonPerimeterEdgeCount(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount"));
    struct Params_GetPolygonPerimeterEdgeCount {
        FPolygonID PolygonID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetPolygonPerimeterEdgeCount params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FEdgeID UEditableMesh::GetPolygonPerimeterEdge(FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdge"));
    struct Params_GetPolygonPerimeterEdge {
        FPolygonID PolygonID; // 0x0
        int32_t PerimeterEdgeNumber; // 0x4
        bool bOutEdgeWindingIsReversedForPolygon; // 0x8
        char pad_9[0x3];
        FEdgeID ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetPolygonPerimeterEdge params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.PerimeterEdgeNumber = (int32_t)PerimeterEdgeNumber;
    params.bOutEdgeWindingIsReversedForPolygon = (bool)bOutEdgeWindingIsReversedForPolygon;
    ProcessEvent(func, &params);
    bOutEdgeWindingIsReversedForPolygon = params.bOutEdgeWindingIsReversedForPolygon;
    return (FEdgeID)params.ReturnValue;
}
FPolygonID UEditableMesh::GetPolygonInGroup(FPolygonGroupID PolygonGroupID, int32_t PolygonNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonInGroup"));
    struct Params_GetPolygonInGroup {
        FPolygonGroupID PolygonGroupID; // 0x0
        int32_t PolygonNumber; // 0x4
        FPolygonID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPolygonInGroup params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    params.PolygonNumber = (int32_t)PolygonNumber;
    ProcessEvent(func, &params);
    return (FPolygonID)params.ReturnValue;
}
int32_t UEditableMesh::GetPolygonGroupCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonGroupCount"));
    struct Params_GetPolygonGroupCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPolygonGroupCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FPolygonID UEditableMesh::GetEdgeConnectedPolygon(FEdgeID EdgeID, int32_t ConnectedPolygonNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygon"));
    struct Params_GetEdgeConnectedPolygon {
        FEdgeID EdgeID; // 0x0
        int32_t ConnectedPolygonNumber; // 0x4
        FPolygonID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetEdgeConnectedPolygon params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.ConnectedPolygonNumber = (int32_t)ConnectedPolygonNumber;
    ProcessEvent(func, &params);
    return (FPolygonID)params.ReturnValue;
}
int32_t UEditableMesh::GetPolygonCountInGroup(FPolygonGroupID PolygonGroupID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonCountInGroup"));
    struct Params_GetPolygonCountInGroup {
        FPolygonGroupID PolygonGroupID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetPolygonCountInGroup params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UEditableMesh::GetPolygonCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonCount"));
    struct Params_GetPolygonCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPolygonCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetPolygonAdjacentPolygons"));
    struct Params_GetPolygonAdjacentPolygons {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FPolygonID> OutAdjacentPolygons; // 0x8
    }; // Size: 0x18
    Params_GetPolygonAdjacentPolygons params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutAdjacentPolygons = (TArray<FPolygonID>)OutAdjacentPolygons;
    ProcessEvent(func, &params);
    OutAdjacentPolygons = params.OutAdjacentPolygons;
}
FVertexID UEditableMesh::GetEdgeVertex(FEdgeID EdgeID, int32_t EdgeVertexNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetEdgeVertex"));
    struct Params_GetEdgeVertex {
        FEdgeID EdgeID; // 0x0
        int32_t EdgeVertexNumber; // 0x4
        FVertexID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetEdgeVertex params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.EdgeVertexNumber = (int32_t)EdgeVertexNumber;
    ProcessEvent(func, &params);
    return (FVertexID)params.ReturnValue;
}
FPolygonGroupID UEditableMesh::GetGroupForPolygon(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetGroupForPolygon"));
    struct Params_GetGroupForPolygon {
        FPolygonID PolygonID; // 0x0
        FPolygonGroupID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetGroupForPolygon params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (FPolygonGroupID)params.ReturnValue;
}
FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetFirstValidPolygonGroup"));
    struct Params_GetFirstValidPolygonGroup {
        FPolygonGroupID ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFirstValidPolygonGroup params{};
    ProcessEvent(func, &params);
    return (FPolygonGroupID)params.ReturnValue;
}
void UEditableMesh::CreateVertexInstances(TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.CreateVertexInstances"));
    struct Params_CreateVertexInstances {
        TArray<FVertexInstanceToCreate> VertexInstancesToCreate; // 0x0
        TArray<FVertexInstanceID> OutNewVertexInstanceIDs; // 0x10
    }; // Size: 0x20
    Params_CreateVertexInstances params{};
    params.VertexInstancesToCreate = (TArray<FVertexInstanceToCreate>)VertexInstancesToCreate;
    params.OutNewVertexInstanceIDs = (TArray<FVertexInstanceID>)OutNewVertexInstanceIDs;
    ProcessEvent(func, &params);
    VertexInstancesToCreate = params.VertexInstancesToCreate;
    OutNewVertexInstanceIDs = params.OutNewVertexInstanceIDs;
}
void UEditableMesh::ExtrudePolygons(TArray<FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ExtrudePolygons"));
    struct Params_ExtrudePolygons {
        TArray<FPolygonID> Polygons; // 0x0
        float ExtrudeDistance; // 0x10
        bool bKeepNeighborsTogether; // 0x14
        char pad_15[0x3];
        TArray<FPolygonID> OutNewExtrudedFrontPolygons; // 0x18
    }; // Size: 0x28
    Params_ExtrudePolygons params{};
    params.Polygons = (TArray<FPolygonID>)Polygons;
    params.ExtrudeDistance = (float)ExtrudeDistance;
    params.bKeepNeighborsTogether = (bool)bKeepNeighborsTogether;
    params.OutNewExtrudedFrontPolygons = (TArray<FPolygonID>)OutNewExtrudedFrontPolygons;
    ProcessEvent(func, &params);
    Polygons = params.Polygons;
    OutNewExtrudedFrontPolygons = params.OutNewExtrudedFrontPolygons;
}
void UEditableMesh::GetEdgeVertices(FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetEdgeVertices"));
    struct Params_GetEdgeVertices {
        FEdgeID EdgeID; // 0x0
        FVertexID OutEdgeVertexID0; // 0x4
        FVertexID OutEdgeVertexID1; // 0x8
    }; // Size: 0xc
    Params_GetEdgeVertices params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.OutEdgeVertexID0 = (FVertexID)OutEdgeVertexID0;
    params.OutEdgeVertexID1 = (FVertexID)OutEdgeVertexID1;
    ProcessEvent(func, &params);
    OutEdgeVertexID1 = params.OutEdgeVertexID1;
    OutEdgeVertexID0 = params.OutEdgeVertexID0;
}
FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(FVertexID VertexID0, FVertexID VertexID1) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetEdgeThatConnectsVertices"));
    struct Params_GetEdgeThatConnectsVertices {
        FVertexID VertexID0; // 0x0
        FVertexID VertexID1; // 0x4
        FEdgeID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetEdgeThatConnectsVertices params{};
    params.VertexID0 = (FVertexID)VertexID0;
    params.VertexID1 = (FVertexID)VertexID1;
    ProcessEvent(func, &params);
    return (FEdgeID)params.ReturnValue;
}
FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere"));
    struct Params_ComputeBoundingBoxAndSphere {
        FBoxSphereBounds ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_ComputeBoundingBoxAndSphere params{};
    ProcessEvent(func, &params);
    return (FBoxSphereBounds)params.ReturnValue;
}
void UEditableMesh::DeletePolygons(TArray<FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.DeletePolygons"));
    struct Params_DeletePolygons {
        TArray<FPolygonID> PolygonIDsToDelete; // 0x0
        bool bDeleteOrphanedEdges; // 0x10
        bool bDeleteOrphanedVertices; // 0x11
        bool bDeleteOrphanedVertexInstances; // 0x12
        bool bDeleteEmptyPolygonGroups; // 0x13
    }; // Size: 0x14
    Params_DeletePolygons params{};
    params.PolygonIDsToDelete = (TArray<FPolygonID>)PolygonIDsToDelete;
    params.bDeleteOrphanedEdges = (bool)bDeleteOrphanedEdges;
    params.bDeleteOrphanedVertices = (bool)bDeleteOrphanedVertices;
    params.bDeleteOrphanedVertexInstances = (bool)bDeleteOrphanedVertexInstances;
    params.bDeleteEmptyPolygonGroups = (bool)bDeleteEmptyPolygonGroups;
    ProcessEvent(func, &params);
    PolygonIDsToDelete = params.PolygonIDsToDelete;
}
void UEditableMesh::GetEdgeLoopElements(FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetEdgeLoopElements"));
    struct Params_GetEdgeLoopElements {
        FEdgeID EdgeID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> EdgeLoopIDs; // 0x8
    }; // Size: 0x18
    Params_GetEdgeLoopElements params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.EdgeLoopIDs = (TArray<FEdgeID>)EdgeLoopIDs;
    ProcessEvent(func, &params);
    EdgeLoopIDs = params.EdgeLoopIDs;
}
int32_t UEditableMesh::GetEdgeCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetEdgeCount"));
    struct Params_GetEdgeCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEdgeCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<FPolygonID>& PolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals"));
    struct Params_GeneratePolygonTangentsAndNormals {
        TArray<FPolygonID> PolygonIDs; // 0x0
    }; // Size: 0x10
    Params_GeneratePolygonTangentsAndNormals params{};
    params.PolygonIDs = (TArray<FPolygonID>)PolygonIDs;
    ProcessEvent(func, &params);
    PolygonIDs = params.PolygonIDs;
}
void UEditableMesh::GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygons"));
    struct Params_GetEdgeConnectedPolygons {
        FEdgeID EdgeID; // 0x0
        char pad_4[0x4];
        TArray<FPolygonID> OutConnectedPolygonIDs; // 0x8
    }; // Size: 0x18
    Params_GetEdgeConnectedPolygons params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.OutConnectedPolygonIDs = (TArray<FPolygonID>)OutConnectedPolygonIDs;
    ProcessEvent(func, &params);
    OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}
int32_t UEditableMesh::GetEdgeConnectedPolygonCount(FEdgeID EdgeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount"));
    struct Params_GetEdgeConnectedPolygonCount {
        FEdgeID EdgeID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetEdgeConnectedPolygonCount params{};
    params.EdgeID = (FEdgeID)EdgeID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::FlipPolygons(TArray<FPolygonID>& PolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.FlipPolygons"));
    struct Params_FlipPolygons {
        TArray<FPolygonID> PolygonIDs; // 0x0
    }; // Size: 0x10
    Params_FlipPolygons params{};
    params.PolygonIDs = (TArray<FPolygonID>)PolygonIDs;
    ProcessEvent(func, &params);
    PolygonIDs = params.PolygonIDs;
}
int32_t UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(FPolygonID PolygonID, FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex"));
    struct Params_FindPolygonPerimeterVertexNumberForVertex {
        FPolygonID PolygonID; // 0x0
        FVertexID VertexID; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_FindPolygonPerimeterVertexNumberForVertex params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(FPolygonID PolygonID, FVertexID EdgeVertexID0, FVertexID EdgeVertexID1) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices"));
    struct Params_FindPolygonPerimeterEdgeNumberForVertices {
        FPolygonID PolygonID; // 0x0
        FVertexID EdgeVertexID0; // 0x4
        FVertexID EdgeVertexID1; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_FindPolygonPerimeterEdgeNumberForVertices params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.EdgeVertexID0 = (FVertexID)EdgeVertexID0;
    params.EdgeVertexID1 = (FVertexID)EdgeVertexID1;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UEditableMesh::FindPolygonLoop(FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.FindPolygonLoop"));
    struct Params_FindPolygonLoop {
        FEdgeID EdgeID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OutEdgeLoopEdgeIDs; // 0x8
        TArray<FEdgeID> OutFlippedEdgeIDs; // 0x18
        TArray<FEdgeID> OutReversedEdgeIDPathToTake; // 0x28
        TArray<FPolygonID> OutPolygonIDsToSplit; // 0x38
    }; // Size: 0x48
    Params_FindPolygonLoop params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.OutEdgeLoopEdgeIDs = (TArray<FEdgeID>)OutEdgeLoopEdgeIDs;
    params.OutFlippedEdgeIDs = (TArray<FEdgeID>)OutFlippedEdgeIDs;
    params.OutReversedEdgeIDPathToTake = (TArray<FEdgeID>)OutReversedEdgeIDPathToTake;
    params.OutPolygonIDsToSplit = (TArray<FPolygonID>)OutPolygonIDsToSplit;
    ProcessEvent(func, &params);
    OutEdgeLoopEdgeIDs = params.OutEdgeLoopEdgeIDs;
    OutReversedEdgeIDPathToTake = params.OutReversedEdgeIDPathToTake;
    OutFlippedEdgeIDs = params.OutFlippedEdgeIDs;
    OutPolygonIDsToSplit = params.OutPolygonIDsToSplit;
}
void UEditableMesh::ExtendEdges(TArray<FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ExtendEdges"));
    struct Params_ExtendEdges {
        TArray<FEdgeID> EdgeIDs; // 0x0
        bool bWeldNeighbors; // 0x10
        char pad_11[0x7];
        TArray<FEdgeID> OutNewExtendedEdgeIDs; // 0x18
    }; // Size: 0x28
    Params_ExtendEdges params{};
    params.EdgeIDs = (TArray<FEdgeID>)EdgeIDs;
    params.bWeldNeighbors = (bool)bWeldNeighbors;
    params.OutNewExtendedEdgeIDs = (TArray<FEdgeID>)OutNewExtendedEdgeIDs;
    ProcessEvent(func, &params);
    EdgeIDs = params.EdgeIDs;
    OutNewExtendedEdgeIDs = params.OutNewExtendedEdgeIDs;
}
void UEditableMesh::EndModification(bool bFromUndo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.EndModification"));
    struct Params_EndModification {
        bool bFromUndo; // 0x0
    }; // Size: 0x1
    Params_EndModification params{};
    params.bFromUndo = (bool)bFromUndo;
    ProcessEvent(func, &params);
}
void UEditableMesh::DeleteVertexInstances(TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.DeleteVertexInstances"));
    struct Params_DeleteVertexInstances {
        TArray<FVertexInstanceID> VertexInstanceIDsToDelete; // 0x0
        bool bDeleteOrphanedVertices; // 0x10
    }; // Size: 0x11
    Params_DeleteVertexInstances params{};
    params.VertexInstanceIDsToDelete = (TArray<FVertexInstanceID>)VertexInstanceIDsToDelete;
    params.bDeleteOrphanedVertices = (bool)bDeleteOrphanedVertices;
    ProcessEvent(func, &params);
    VertexInstanceIDsToDelete = params.VertexInstanceIDsToDelete;
}
void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons"));
    struct Params_DeleteVertexAndConnectedEdgesAndPolygons {
        FVertexID VertexID; // 0x0
        bool bDeleteOrphanedEdges; // 0x4
        bool bDeleteOrphanedVertices; // 0x5
        bool bDeleteOrphanedVertexInstances; // 0x6
        bool bDeleteEmptyPolygonGroups; // 0x7
    }; // Size: 0x8
    Params_DeleteVertexAndConnectedEdgesAndPolygons params{};
    params.VertexID = (FVertexID)VertexID;
    params.bDeleteOrphanedEdges = (bool)bDeleteOrphanedEdges;
    params.bDeleteOrphanedVertices = (bool)bDeleteOrphanedVertices;
    params.bDeleteOrphanedVertexInstances = (bool)bDeleteOrphanedVertexInstances;
    params.bDeleteEmptyPolygonGroups = (bool)bDeleteEmptyPolygonGroups;
    ProcessEvent(func, &params);
}
void UEditableMesh::DeletePolygonGroups(TArray<FPolygonGroupID>& PolygonGroupIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.DeletePolygonGroups"));
    struct Params_DeletePolygonGroups {
        TArray<FPolygonGroupID> PolygonGroupIDs; // 0x0
    }; // Size: 0x10
    Params_DeletePolygonGroups params{};
    params.PolygonGroupIDs = (TArray<FPolygonGroupID>)PolygonGroupIDs;
    ProcessEvent(func, &params);
    PolygonGroupIDs = params.PolygonGroupIDs;
}
void UEditableMesh::DeleteOrphanVertices(TArray<FVertexID>& VertexIDsToDelete) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.DeleteOrphanVertices"));
    struct Params_DeleteOrphanVertices {
        TArray<FVertexID> VertexIDsToDelete; // 0x0
    }; // Size: 0x10
    Params_DeleteOrphanVertices params{};
    params.VertexIDsToDelete = (TArray<FVertexID>)VertexIDsToDelete;
    ProcessEvent(func, &params);
    VertexIDsToDelete = params.VertexIDsToDelete;
}
void UEditableMesh::DeleteEdges(TArray<FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.DeleteEdges"));
    struct Params_DeleteEdges {
        TArray<FEdgeID> EdgeIDsToDelete; // 0x0
        bool bDeleteOrphanedVertices; // 0x10
    }; // Size: 0x11
    Params_DeleteEdges params{};
    params.EdgeIDsToDelete = (TArray<FEdgeID>)EdgeIDsToDelete;
    params.bDeleteOrphanedVertices = (bool)bDeleteOrphanedVertices;
    ProcessEvent(func, &params);
    EdgeIDsToDelete = params.EdgeIDsToDelete;
}
void UEditableMesh::DeleteEdgeAndConnectedPolygons(FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons"));
    struct Params_DeleteEdgeAndConnectedPolygons {
        FEdgeID EdgeID; // 0x0
        bool bDeleteOrphanedEdges; // 0x4
        bool bDeleteOrphanedVertices; // 0x5
        bool bDeleteOrphanedVertexInstances; // 0x6
        bool bDeleteEmptyPolygonGroups; // 0x7
    }; // Size: 0x8
    Params_DeleteEdgeAndConnectedPolygons params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.bDeleteOrphanedEdges = (bool)bDeleteOrphanedEdges;
    params.bDeleteOrphanedVertices = (bool)bDeleteOrphanedVertices;
    params.bDeleteOrphanedVertexInstances = (bool)bDeleteOrphanedVertexInstances;
    params.bDeleteEmptyPolygonGroups = (bool)bDeleteEmptyPolygonGroups;
    ProcessEvent(func, &params);
}
void UEditableMesh::CreatePolygons(TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.CreatePolygons"));
    struct Params_CreatePolygons {
        TArray<FPolygonToCreate> PolygonsToCreate; // 0x0
        TArray<FPolygonID> OutNewPolygonIDs; // 0x10
        TArray<FEdgeID> OutNewEdgeIDs; // 0x20
    }; // Size: 0x30
    Params_CreatePolygons params{};
    params.PolygonsToCreate = (TArray<FPolygonToCreate>)PolygonsToCreate;
    params.OutNewPolygonIDs = (TArray<FPolygonID>)OutNewPolygonIDs;
    params.OutNewEdgeIDs = (TArray<FEdgeID>)OutNewEdgeIDs;
    ProcessEvent(func, &params);
    PolygonsToCreate = params.PolygonsToCreate;
    OutNewPolygonIDs = params.OutNewPolygonIDs;
    OutNewEdgeIDs = params.OutNewEdgeIDs;
}
void UEditableMesh::CreatePolygonGroups(TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.CreatePolygonGroups"));
    struct Params_CreatePolygonGroups {
        TArray<FPolygonGroupToCreate> PolygonGroupsToCreate; // 0x0
        TArray<FPolygonGroupID> OutNewPolygonGroupIDs; // 0x10
    }; // Size: 0x20
    Params_CreatePolygonGroups params{};
    params.PolygonGroupsToCreate = (TArray<FPolygonGroupToCreate>)PolygonGroupsToCreate;
    params.OutNewPolygonGroupIDs = (TArray<FPolygonGroupID>)OutNewPolygonGroupIDs;
    ProcessEvent(func, &params);
    PolygonGroupsToCreate = params.PolygonGroupsToCreate;
    OutNewPolygonGroupIDs = params.OutNewPolygonGroupIDs;
}
void UEditableMesh::CreateMissingPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges"));
    struct Params_CreateMissingPolygonPerimeterEdges {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OutNewEdgeIDs; // 0x8
    }; // Size: 0x18
    Params_CreateMissingPolygonPerimeterEdges params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutNewEdgeIDs = (TArray<FEdgeID>)OutNewEdgeIDs;
    ProcessEvent(func, &params);
    OutNewEdgeIDs = params.OutNewEdgeIDs;
}
void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups"));
    struct Params_AssignPolygonsToPolygonGroups {
        TArray<FPolygonGroupForPolygon> PolygonGroupForPolygons; // 0x0
        bool bDeleteOrphanedPolygonGroups; // 0x10
    }; // Size: 0x11
    Params_AssignPolygonsToPolygonGroups params{};
    params.PolygonGroupForPolygons = (TArray<FPolygonGroupForPolygon>)PolygonGroupForPolygons;
    params.bDeleteOrphanedPolygonGroups = (bool)bDeleteOrphanedPolygonGroups;
    ProcessEvent(func, &params);
    PolygonGroupForPolygons = params.PolygonGroupForPolygons;
}
void UEditableMesh::CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.CreateEmptyVertexRange"));
    struct Params_CreateEmptyVertexRange {
        int32_t NumVerticesToCreate; // 0x0
        char pad_4[0x4];
        TArray<FVertexID> OutNewVertexIDs; // 0x8
    }; // Size: 0x18
    Params_CreateEmptyVertexRange params{};
    params.NumVerticesToCreate = (int32_t)NumVerticesToCreate;
    params.OutNewVertexIDs = (TArray<FVertexID>)OutNewVertexIDs;
    ProcessEvent(func, &params);
    OutNewVertexIDs = params.OutNewVertexIDs;
}
void UEditableMesh::ComputePolygonsSharedEdges(TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ComputePolygonsSharedEdges"));
    struct Params_ComputePolygonsSharedEdges {
        TArray<FPolygonID> PolygonIDs; // 0x0
        TArray<FEdgeID> OutSharedEdgeIDs; // 0x10
    }; // Size: 0x20
    Params_ComputePolygonsSharedEdges params{};
    params.PolygonIDs = (TArray<FPolygonID>)PolygonIDs;
    params.OutSharedEdgeIDs = (TArray<FEdgeID>)OutSharedEdgeIDs;
    ProcessEvent(func, &params);
    PolygonIDs = params.PolygonIDs;
    OutSharedEdgeIDs = params.OutSharedEdgeIDs;
}
FPlane UEditableMesh::ComputePolygonPlane(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ComputePolygonPlane"));
    struct Params_ComputePolygonPlane {
        FPolygonID PolygonID; // 0x0
        char pad_4[0xc];
        FPlane ReturnValue; // 0x10
    }; // Size: 0x20
    Params_ComputePolygonPlane params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (FPlane)params.ReturnValue;
}
FVector UEditableMesh::ComputePolygonNormal(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ComputePolygonNormal"));
    struct Params_ComputePolygonNormal {
        FPolygonID PolygonID; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_ComputePolygonNormal params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UEditableMesh::ComputePolygonCenter(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ComputePolygonCenter"));
    struct Params_ComputePolygonCenter {
        FPolygonID PolygonID; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_ComputePolygonCenter params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FBox UEditableMesh::ComputeBoundingBox() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ComputeBoundingBox"));
    struct Params_ComputeBoundingBox {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_ComputeBoundingBox params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
UEditableMesh* UEditableMesh::CommitInstance(UPrimitiveComponent* ComponentToInstanceTo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.CommitInstance"));
    struct Params_CommitInstance {
        UPrimitiveComponent* ComponentToInstanceTo; // 0x0
        UEditableMesh* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CommitInstance params{};
    params.ComponentToInstanceTo = (UPrimitiveComponent*)ComponentToInstanceTo;
    ProcessEvent(func, &params);
    return (UEditableMesh*)params.ReturnValue;
}
void UEditableMesh::Commit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.Commit"));
    struct Params_Commit {
    }; // Size: 0x0
    Params_Commit params{};
    ProcessEvent(func, &params);
}
void UEditableMesh::ChangePolygonsVertexInstances(TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EditableMesh.EditableMesh.ChangePolygonsVertexInstances"));
    struct Params_ChangePolygonsVertexInstances {
        TArray<FChangeVertexInstancesForPolygon> VertexInstancesForPolygons; // 0x0
    }; // Size: 0x10
    Params_ChangePolygonsVertexInstances params{};
    params.VertexInstancesForPolygons = (TArray<FChangeVertexInstancesForPolygon>)VertexInstancesForPolygons;
    ProcessEvent(func, &params);
    VertexInstancesForPolygons = params.VertexInstancesForPolygons;
}
