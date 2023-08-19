#pragma once
#include <cstdint>
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
#include "UObject.hpp"
class UEditableMeshAdapter;
class UPrimitiveComponent;
#pragma pack(push, 1)
class UEditableMesh : public UObject {
public:
    char pad_28[0x390];
    TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
    char pad_3c8[0x8];
    int32_t TextureCoordinateCount; // 0x3d0
    char pad_3d4[0x148];
    int32_t PendingCompactCounter; // 0x51c
    int32_t SubdivisionCount; // 0x520
    char pad_524[0x1e4];
    static UEditableMesh* StaticClass();
    void WeldVertices(TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);
    void TryToRemoveVertex(FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);
    void TryToRemovePolygonEdge(FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);
    void TriangulatePolygons(TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);
    void TessellatePolygons(TArray<FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs);
    void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);
    void SplitPolygons(TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);
    void SplitPolygonalMesh(FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs);
    void SplitEdge(FEdgeID EdgeID, TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);
    void SetVerticesCornerSharpness(TArray<FVertexID>& VertexIDs, TArray<float>& VerticesNewCornerSharpness);
    void SetVerticesAttributes(TArray<FAttributesForVertex>& AttributesForVertices);
    void SetVertexInstancesAttributes(TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);
    void SetTextureCoordinateCount(int32_t NumTexCoords);
    void SetSubdivisionCount(int32_t NewSubdivisionCount);
    void SetPolygonsVertexAttributes(TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);
    void SetEdgesHardnessAutomatically(TArray<FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);
    void SetEdgesHardness(TArray<FEdgeID>& EdgeIDs, TArray<bool>& EdgesNewIsHard);
    void SetEdgesCreaseSharpness(TArray<FEdgeID>& EdgeIDs, TArray<float>& EdgesNewCreaseSharpness);
    void SetEdgesAttributes(TArray<FAttributesForEdge>& AttributesForEdges);
    void SetAllowUndo(bool bInAllowUndo);
    void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);
    void SetAllowCompact(bool bInAllowCompact);
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(FPlane& InPlane, TArray<FPolygonID>& OutPolygons);
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(FVector LineSegmentStart, FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons);
    void SearchSpatialDatabaseForPolygonsInVolume(TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons);
    UEditableMesh* RevertInstance();
    void Revert();
    void RebuildRenderMesh();
    void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);
    void PropagateInstanceChanges();
    void MoveVertices(TArray<FVertexToMove>& VerticesToMove);
    static FVertexID MakeVertexID(int32_t VertexIndex);
    static FPolygonID MakePolygonID(int32_t PolygonIndex);
    static FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);
    static FEdgeID MakeEdgeID(int32_t EdgeIndex);
    bool IsValidVertex(FVertexID VertexID);
    bool IsValidPolygonGroup(FPolygonGroupID PolygonGroupID);
    bool IsValidPolygon(FPolygonID PolygonID);
    bool IsValidEdge(FEdgeID EdgeID);
    bool IsUndoAllowed();
    bool IsSpatialDatabaseAllowed();
    bool IsPreviewingSubdivisions();
    bool IsOrphanedVertex(FVertexID VertexID);
    bool IsCompactAllowed();
    bool IsCommittedAsInstance();
    bool IsCommitted();
    bool IsBeingModified();
    static FVertexID InvalidVertexID();
    static FPolygonID InvalidPolygonID();
    static FPolygonGroupID InvalidPolygonGroupID();
    static FEdgeID InvalidEdgeID();
    void InsetPolygons(TArray<FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    void InsertEdgeLoop(FEdgeID EdgeID, TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);
    void InitializeAdapters();
    FEdgeID GetVertexPairEdge(FVertexID VertexID, FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed);
    FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);
    int32_t GetVertexInstanceCount();
    void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    int32_t GetVertexInstanceConnectedPolygonCount(FVertexInstanceID VertexInstanceID);
    FPolygonID GetVertexInstanceConnectedPolygon(FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber);
    int32_t GetVertexCount();
    void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs);
    int32_t GetVertexConnectedEdgeCount(FVertexID VertexID);
    FEdgeID GetVertexConnectedEdge(FVertexID VertexID, int32_t ConnectedEdgeNumber);
    void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);
    int32_t GetTextureCoordinateCount();
    FSubdivisionLimitData GetSubdivisionLimitData();
    int32_t GetSubdivisionCount();
    int32_t GetPolygonTriangulatedTriangleCount(FPolygonID PolygonID);
    FTriangleID GetPolygonTriangulatedTriangle(FPolygonID PolygonID, int32_t PolygonTriangleNumber);
    void GetPolygonPerimeterVertices(FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs);
    void GetPolygonPerimeterVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs);
    FVertexInstanceID GetPolygonPerimeterVertexInstance(FPolygonID PolygonID, int32_t PolygonVertexNumber);
    int32_t GetPolygonPerimeterVertexCount(FPolygonID PolygonID);
    FVertexID GetPolygonPerimeterVertex(FPolygonID PolygonID, int32_t PolygonVertexNumber);
    void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs);
    int32_t GetPolygonPerimeterEdgeCount(FPolygonID PolygonID);
    FEdgeID GetPolygonPerimeterEdge(FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon);
    FPolygonID GetPolygonInGroup(FPolygonGroupID PolygonGroupID, int32_t PolygonNumber);
    int32_t GetPolygonGroupCount();
    int32_t GetPolygonCountInGroup(FPolygonGroupID PolygonGroupID);
    int32_t GetPolygonCount();
    void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons);
    FPolygonGroupID GetGroupForPolygon(FPolygonID PolygonID);
    FPolygonGroupID GetFirstValidPolygonGroup();
    void GetEdgeVertices(FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1);
    FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t EdgeVertexNumber);
    FEdgeID GetEdgeThatConnectsVertices(FVertexID VertexID0, FVertexID VertexID1);
    void GetEdgeLoopElements(FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs);
    int32_t GetEdgeCount();
    void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);
    int32_t GetEdgeConnectedPolygonCount(FEdgeID EdgeID);
    FPolygonID GetEdgeConnectedPolygon(FEdgeID EdgeID, int32_t ConnectedPolygonNumber);
    void GeneratePolygonTangentsAndNormals(TArray<FPolygonID>& PolygonIDs);
    void FlipPolygons(TArray<FPolygonID>& PolygonIDs);
    int32_t FindPolygonPerimeterVertexNumberForVertex(FPolygonID PolygonID, FVertexID VertexID);
    int32_t FindPolygonPerimeterEdgeNumberForVertices(FPolygonID PolygonID, FVertexID EdgeVertexID0, FVertexID EdgeVertexID1);
    void FindPolygonLoop(FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit);
    void ExtrudePolygons(TArray<FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons);
    void ExtendVertices(TArray<FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs);
    void ExtendEdges(TArray<FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);
    void EndModification(bool bFromUndo);
    void DeleteVertexInstances(TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);
    void DeleteVertexAndConnectedEdgesAndPolygons(FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
    void DeletePolygons(TArray<FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
    void DeletePolygonGroups(TArray<FPolygonGroupID>& PolygonGroupIDs);
    void DeleteOrphanVertices(TArray<FVertexID>& VertexIDsToDelete);
    void DeleteEdges(TArray<FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices);
    void DeleteEdgeAndConnectedPolygons(FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
    void CreateVertices(TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    void CreateVertexInstances(TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs);
    void CreatePolygons(TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs);
    void CreatePolygonGroups(TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs);
    void CreateMissingPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);
    void CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    void CreateEdges(TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);
    void ComputePolygonsSharedEdges(TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs);
    FPlane ComputePolygonPlane(FPolygonID PolygonID);
    FVector ComputePolygonNormal(FPolygonID PolygonID);
    FVector ComputePolygonCenter(FPolygonID PolygonID);
    FBoxSphereBounds ComputeBoundingBoxAndSphere();
    FBox ComputeBoundingBox();
    UEditableMesh* CommitInstance(UPrimitiveComponent* ComponentToInstanceTo);
    void Commit();
    void ChangePolygonsVertexInstances(TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);
    void BevelPolygons(TArray<FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    void AssignPolygonsToPolygonGroups(TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);
    bool AnyChangesToUndo();
}; // Size: 0x708
#pragma pack(pop)
