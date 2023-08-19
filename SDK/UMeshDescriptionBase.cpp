#include "FEdgeID.hpp"
#include "FPolygonGroupID.hpp"
#include "FPolygonID.hpp"
#include "FTriangleID.hpp"
#include "FVector.hpp"
#include "FVertexID.hpp"
#include "FVertexInstanceID.hpp"
#include "UFunction.hpp"
#include "UMeshDescriptionBase.hpp"
#include "UObject.hpp"
void UMeshDescriptionBase::ReserveNewTriangles(int32_t NumberOfNewTriangles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles"));
    struct Params_ReserveNewTriangles {
        int32_t NumberOfNewTriangles; // 0x0
    }; // Size: 0x4
    Params_ReserveNewTriangles params{};
    params.NumberOfNewTriangles = (int32_t)NumberOfNewTriangles;
    ProcessEvent(func, &params);
}
int32_t UMeshDescriptionBase::GetNumPolygonTriangles(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles"));
    struct Params_GetNumPolygonTriangles {
        FPolygonID PolygonID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumPolygonTriangles params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex"));
    struct Params_GetVertexInstanceForPolygonVertex {
        FPolygonID PolygonID; // 0x0
        FVertexID VertexID; // 0x4
        FVertexInstanceID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVertexInstanceForPolygonVertex params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (FVertexInstanceID)params.ReturnValue;
}
UMeshDescriptionBase* UMeshDescriptionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshDescription.MeshDescriptionBase");
    return (UMeshDescriptionBase*)res;
}
void UMeshDescriptionBase::SetVertexPosition(FVertexID VertexID, FVector& Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition"));
    struct Params_SetVertexPosition {
        FVertexID VertexID; // 0x0
        FVector Position; // 0x4
    }; // Size: 0x10
    Params_SetVertexPosition params{};
    params.VertexID = (FVertexID)VertexID;
    params.Position = (FVector)Position;
    ProcessEvent(func, &params);
    Position = params.Position;
}
void UMeshDescriptionBase::GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons"));
    struct Params_GetPolygonAdjacentPolygons {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FPolygonID> OutPolygonIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonAdjacentPolygons params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutPolygonIDs = (TArray<FPolygonID>)OutPolygonIDs;
    ProcessEvent(func, &params);
    OutPolygonIDs = params.OutPolygonIDs;
}
void UMeshDescriptionBase::SetPolygonVertexInstance(FPolygonID PolygonID, int32_t PerimeterIndex, FVertexInstanceID VertexInstanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance"));
    struct Params_SetPolygonVertexInstance {
        FPolygonID PolygonID; // 0x0
        int32_t PerimeterIndex; // 0x4
        FVertexInstanceID VertexInstanceID; // 0x8
    }; // Size: 0xc
    Params_SetPolygonVertexInstance params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.PerimeterIndex = (int32_t)PerimeterIndex;
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    ProcessEvent(func, &params);
}
FTriangleID UMeshDescriptionBase::CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle"));
    struct Params_CreateTriangle {
        FPolygonGroupID PolygonGroupID; // 0x0
        char pad_4[0x4];
        TArray<FVertexInstanceID> VertexInstanceIDs; // 0x8
        TArray<FEdgeID> NewEdgeIDs; // 0x18
        FTriangleID ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_CreateTriangle params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    params.VertexInstanceIDs = (TArray<FVertexInstanceID>)VertexInstanceIDs;
    params.NewEdgeIDs = (TArray<FEdgeID>)NewEdgeIDs;
    ProcessEvent(func, &params);
    NewEdgeIDs = params.NewEdgeIDs;
    VertexInstanceIDs = params.VertexInstanceIDs;
    return (FTriangleID)params.ReturnValue;
}
bool UMeshDescriptionBase::IsEmpty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty"));
    struct Params_IsEmpty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEmpty params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMeshDescriptionBase::IsPolygonValid(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid"));
    struct Params_IsPolygonValid {
        FPolygonID PolygonID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsPolygonValid params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMeshDescriptionBase::SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup"));
    struct Params_SetPolygonPolygonGroup {
        FPolygonID PolygonID; // 0x0
        FPolygonGroupID PolygonGroupID; // 0x4
    }; // Size: 0x8
    Params_SetPolygonPolygonGroup params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::ReserveNewVertices(int32_t NumberOfNewVertices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices"));
    struct Params_ReserveNewVertices {
        int32_t NumberOfNewVertices; // 0x0
    }; // Size: 0x4
    Params_ReserveNewVertices params{};
    params.NumberOfNewVertices = (int32_t)NumberOfNewVertices;
    ProcessEvent(func, &params);
}
FVertexID UMeshDescriptionBase::CreateVertex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex"));
    struct Params_CreateVertex {
        FVertexID ReturnValue; // 0x0
    }; // Size: 0x4
    Params_CreateVertex params{};
    ProcessEvent(func, &params);
    return (FVertexID)params.ReturnValue;
}
void UMeshDescriptionBase::GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances"));
    struct Params_GetVertexVertexInstances {
        FVertexID VertexID; // 0x0
        char pad_4[0x4];
        TArray<FVertexInstanceID> OutVertexInstanceIDs; // 0x8
    }; // Size: 0x18
    Params_GetVertexVertexInstances params{};
    params.VertexID = (FVertexID)VertexID;
    params.OutVertexInstanceIDs = (TArray<FVertexInstanceID>)OutVertexInstanceIDs;
    ProcessEvent(func, &params);
    OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}
void UMeshDescriptionBase::ReversePolygonFacing(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing"));
    struct Params_ReversePolygonFacing {
        FPolygonID PolygonID; // 0x0
    }; // Size: 0x4
    Params_ReversePolygonFacing params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances"));
    struct Params_ReserveNewVertexInstances {
        int32_t NumberOfNewVertexInstances; // 0x0
    }; // Size: 0x4
    Params_ReserveNewVertexInstances params{};
    params.NumberOfNewVertexInstances = (int32_t)NumberOfNewVertexInstances;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::ReserveNewPolygons(int32_t NumberOfNewPolygons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons"));
    struct Params_ReserveNewPolygons {
        int32_t NumberOfNewPolygons; // 0x0
    }; // Size: 0x4
    Params_ReserveNewPolygons params{};
    params.NumberOfNewPolygons = (int32_t)NumberOfNewPolygons;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups"));
    struct Params_ReserveNewPolygonGroups {
        int32_t NumberOfNewPolygonGroups; // 0x0
    }; // Size: 0x4
    Params_ReserveNewPolygonGroups params{};
    params.NumberOfNewPolygonGroups = (int32_t)NumberOfNewPolygonGroups;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons"));
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
void UMeshDescriptionBase::ReserveNewEdges(int32_t NumberOfNewEdges) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges"));
    struct Params_ReserveNewEdges {
        int32_t NumberOfNewEdges; // 0x0
    }; // Size: 0x4
    Params_ReserveNewEdges params{};
    params.NumberOfNewEdges = (int32_t)NumberOfNewEdges;
    ProcessEvent(func, &params);
}
bool UMeshDescriptionBase::IsVertexValid(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid"));
    struct Params_IsVertexValid {
        FVertexID VertexID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsVertexValid params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMeshDescriptionBase::IsVertexOrphaned(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned"));
    struct Params_IsVertexOrphaned {
        FVertexID VertexID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsVertexOrphaned params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMeshDescriptionBase::IsVertexInstanceValid(FVertexInstanceID VertexInstanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid"));
    struct Params_IsVertexInstanceValid {
        FVertexInstanceID VertexInstanceID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsVertexInstanceValid params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMeshDescriptionBase::GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges"));
    struct Params_GetTriangleEdges {
        FTriangleID TriangleID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OutEdgeIDs; // 0x8
    }; // Size: 0x18
    Params_GetTriangleEdges params{};
    params.TriangleID = (FTriangleID)TriangleID;
    params.OutEdgeIDs = (TArray<FEdgeID>)OutEdgeIDs;
    ProcessEvent(func, &params);
    OutEdgeIDs = params.OutEdgeIDs;
}
bool UMeshDescriptionBase::IsTriangleValid(FTriangleID TriangleID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid"));
    struct Params_IsTriangleValid {
        FTriangleID TriangleID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsTriangleValid params{};
    params.TriangleID = (FTriangleID)TriangleID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMeshDescriptionBase::IsTrianglePartOfNgon(FTriangleID TriangleID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon"));
    struct Params_IsTrianglePartOfNgon {
        FTriangleID TriangleID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsTrianglePartOfNgon params{};
    params.TriangleID = (FTriangleID)TriangleID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMeshDescriptionBase::GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges"));
    struct Params_GetPolygonPerimeterEdges {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OutEdgeIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonPerimeterEdges params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutEdgeIDs = (TArray<FEdgeID>)OutEdgeIDs;
    ProcessEvent(func, &params);
    OutEdgeIDs = params.OutEdgeIDs;
}
bool UMeshDescriptionBase::IsPolygonGroupValid(FPolygonGroupID PolygonGroupID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid"));
    struct Params_IsPolygonGroupValid {
        FPolygonGroupID PolygonGroupID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsPolygonGroupValid params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMeshDescriptionBase::IsEdgeValid(FEdgeID EdgeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid"));
    struct Params_IsEdgeValid {
        FEdgeID EdgeID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsEdgeValid params{};
    params.EdgeID = (FEdgeID)EdgeID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMeshDescriptionBase::IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon"));
    struct Params_IsEdgeInternalToPolygon {
        FEdgeID EdgeID; // 0x0
        FPolygonID PolygonID; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsEdgeInternalToPolygon params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMeshDescriptionBase::IsEdgeInternal(FEdgeID EdgeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal"));
    struct Params_IsEdgeInternal {
        FEdgeID EdgeID; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsEdgeInternal params{};
    params.EdgeID = (FEdgeID)EdgeID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UMeshDescriptionBase::GetVertexPosition(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition"));
    struct Params_GetVertexPosition {
        FVertexID VertexID; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetVertexPosition params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FEdgeID UMeshDescriptionBase::GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge"));
    struct Params_GetVertexPairEdge {
        FVertexID VertexID0; // 0x0
        FVertexID VertexID1; // 0x4
        FEdgeID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVertexPairEdge params{};
    params.VertexID0 = (FVertexID)VertexID0;
    params.VertexID1 = (FVertexID)VertexID1;
    ProcessEvent(func, &params);
    return (FEdgeID)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons"));
    struct Params_GetNumPolygonGroupPolygons {
        FPolygonGroupID PolygonGroupID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumPolygonGroupPolygons params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons"));
    struct Params_GetNumVertexInstanceConnectedPolygons {
        FVertexInstanceID VertexInstanceID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumVertexInstanceConnectedPolygons params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex"));
    struct Params_GetVertexInstanceVertex {
        FVertexInstanceID VertexInstanceID; // 0x0
        FVertexID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetVertexInstanceVertex params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    ProcessEvent(func, &params);
    return (FVertexID)params.ReturnValue;
}
FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge"));
    struct Params_GetVertexInstancePairEdge {
        FVertexInstanceID VertexInstanceID0; // 0x0
        FVertexInstanceID VertexInstanceID1; // 0x4
        FEdgeID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVertexInstancePairEdge params{};
    params.VertexInstanceID0 = (FVertexInstanceID)VertexInstanceID0;
    params.VertexInstanceID1 = (FVertexInstanceID)VertexInstanceID1;
    ProcessEvent(func, &params);
    return (FEdgeID)params.ReturnValue;
}
FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup"));
    struct Params_GetPolygonPolygonGroup {
        FPolygonID PolygonID; // 0x0
        FPolygonGroupID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetPolygonPolygonGroup params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (FPolygonGroupID)params.ReturnValue;
}
FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex"));
    struct Params_GetVertexInstanceForTriangleVertex {
        FTriangleID TriangleID; // 0x0
        FVertexID VertexID; // 0x4
        FVertexInstanceID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVertexInstanceForTriangleVertex params{};
    params.TriangleID = (FTriangleID)TriangleID;
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (FVertexInstanceID)params.ReturnValue;
}
void UMeshDescriptionBase::GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons"));
    struct Params_GetPolygonGroupPolygons {
        FPolygonGroupID PolygonGroupID; // 0x0
        char pad_4[0x4];
        TArray<FPolygonID> OutPolygonIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonGroupPolygons params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    params.OutPolygonIDs = (TArray<FPolygonID>)OutPolygonIDs;
    ProcessEvent(func, &params);
    OutPolygonIDs = params.OutPolygonIDs;
}
void UMeshDescriptionBase::GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices"));
    struct Params_GetTriangleVertices {
        FTriangleID TriangleID; // 0x0
        char pad_4[0x4];
        TArray<FVertexID> OutVertexIDs; // 0x8
    }; // Size: 0x18
    Params_GetTriangleVertices params{};
    params.TriangleID = (FTriangleID)TriangleID;
    params.OutVertexIDs = (TArray<FVertexID>)OutVertexIDs;
    ProcessEvent(func, &params);
    OutVertexIDs = params.OutVertexIDs;
}
void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles"));
    struct Params_GetVertexInstanceConnectedTriangles {
        FVertexInstanceID VertexInstanceID; // 0x0
        char pad_4[0x4];
        TArray<FTriangleID> OutConnectedTriangleIDs; // 0x8
    }; // Size: 0x18
    Params_GetVertexInstanceConnectedTriangles params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    params.OutConnectedTriangleIDs = (TArray<FTriangleID>)OutConnectedTriangleIDs;
    ProcessEvent(func, &params);
    OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}
void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons"));
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
void UMeshDescriptionBase::GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles"));
    struct Params_GetVertexConnectedTriangles {
        FVertexID VertexID; // 0x0
        char pad_4[0x4];
        TArray<FTriangleID> OutConnectedTriangleIDs; // 0x8
    }; // Size: 0x18
    Params_GetVertexConnectedTriangles params{};
    params.VertexID = (FVertexID)VertexID;
    params.OutConnectedTriangleIDs = (TArray<FTriangleID>)OutConnectedTriangleIDs;
    ProcessEvent(func, &params);
    OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}
FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup"));
    struct Params_CreatePolygonGroup {
        FPolygonGroupID ReturnValue; // 0x0
    }; // Size: 0x4
    Params_CreatePolygonGroup params{};
    ProcessEvent(func, &params);
    return (FPolygonGroupID)params.ReturnValue;
}
void UMeshDescriptionBase::GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges"));
    struct Params_GetVertexConnectedEdges {
        FVertexID VertexID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OutEdgeIDs; // 0x8
    }; // Size: 0x18
    Params_GetVertexConnectedEdges params{};
    params.VertexID = (FVertexID)VertexID;
    params.OutEdgeIDs = (TArray<FEdgeID>)OutEdgeIDs;
    ProcessEvent(func, &params);
    OutEdgeIDs = params.OutEdgeIDs;
}
void UMeshDescriptionBase::GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices"));
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
void UMeshDescriptionBase::GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances"));
    struct Params_GetTriangleVertexInstances {
        FTriangleID TriangleID; // 0x0
        char pad_4[0x4];
        TArray<FVertexInstanceID> OutVertexInstanceIDs; // 0x8
    }; // Size: 0x18
    Params_GetTriangleVertexInstances params{};
    params.TriangleID = (FTriangleID)TriangleID;
    params.OutVertexInstanceIDs = (TArray<FVertexInstanceID>)OutVertexInstanceIDs;
    ProcessEvent(func, &params);
    OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}
FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance"));
    struct Params_GetTriangleVertexInstance {
        FTriangleID TriangleID; // 0x0
        int32_t Index; // 0x4
        FVertexInstanceID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTriangleVertexInstance params{};
    params.TriangleID = (FTriangleID)TriangleID;
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (FVertexInstanceID)params.ReturnValue;
}
FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(FTriangleID TriangleID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup"));
    struct Params_GetTrianglePolygonGroup {
        FTriangleID TriangleID; // 0x0
        FPolygonGroupID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetTrianglePolygonGroup params{};
    params.TriangleID = (FTriangleID)TriangleID;
    ProcessEvent(func, &params);
    return (FPolygonGroupID)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumVertexConnectedEdges(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges"));
    struct Params_GetNumVertexConnectedEdges {
        FVertexID VertexID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumVertexConnectedEdges params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FPolygonID UMeshDescriptionBase::GetTrianglePolygon(FTriangleID TriangleID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon"));
    struct Params_GetTrianglePolygon {
        FTriangleID TriangleID; // 0x0
        FPolygonID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetTrianglePolygon params{};
    params.TriangleID = (FTriangleID)TriangleID;
    ProcessEvent(func, &params);
    return (FPolygonID)params.ReturnValue;
}
void UMeshDescriptionBase::GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles"));
    struct Params_GetTriangleAdjacentTriangles {
        FTriangleID TriangleID; // 0x0
        char pad_4[0x4];
        TArray<FTriangleID> OutTriangleIDs; // 0x8
    }; // Size: 0x18
    Params_GetTriangleAdjacentTriangles params{};
    params.TriangleID = (FTriangleID)TriangleID;
    params.OutTriangleIDs = (TArray<FTriangleID>)OutTriangleIDs;
    ProcessEvent(func, &params);
    OutTriangleIDs = params.OutTriangleIDs;
}
void UMeshDescriptionBase::GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices"));
    struct Params_GetPolygonVertices {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FVertexID> OutVertexIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonVertices params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutVertexIDs = (TArray<FVertexID>)OutVertexIDs;
    ProcessEvent(func, &params);
    OutVertexIDs = params.OutVertexIDs;
}
void UMeshDescriptionBase::GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances"));
    struct Params_GetPolygonVertexInstances {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FVertexInstanceID> OutVertexInstanceIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonVertexInstances params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutVertexInstanceIDs = (TArray<FVertexInstanceID>)OutVertexInstanceIDs;
    ProcessEvent(func, &params);
    OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}
int32_t UMeshDescriptionBase::GetNumEdgeConnectedTriangles(FEdgeID EdgeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles"));
    struct Params_GetNumEdgeConnectedTriangles {
        FEdgeID EdgeID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumEdgeConnectedTriangles params{};
    params.EdgeID = (FEdgeID)EdgeID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UMeshDescriptionBase::GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles"));
    struct Params_GetPolygonTriangles {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FTriangleID> OutTriangleIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonTriangles params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutTriangleIDs = (TArray<FTriangleID>)OutTriangleIDs;
    ProcessEvent(func, &params);
    OutTriangleIDs = params.OutTriangleIDs;
}
void UMeshDescriptionBase::GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges"));
    struct Params_GetPolygonInternalEdges {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OutEdgeIDs; // 0x8
    }; // Size: 0x18
    Params_GetPolygonInternalEdges params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OutEdgeIDs = (TArray<FEdgeID>)OutEdgeIDs;
    ProcessEvent(func, &params);
    OutEdgeIDs = params.OutEdgeIDs;
}
int32_t UMeshDescriptionBase::GetNumVertexVertexInstances(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances"));
    struct Params_GetNumVertexVertexInstances {
        FVertexID VertexID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumVertexVertexInstances params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles"));
    struct Params_GetNumVertexInstanceConnectedTriangles {
        FVertexInstanceID VertexInstanceID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumVertexInstanceConnectedTriangles params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumVertexConnectedTriangles(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles"));
    struct Params_GetNumVertexConnectedTriangles {
        FVertexID VertexID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumVertexConnectedTriangles params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumVertexConnectedPolygons(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons"));
    struct Params_GetNumVertexConnectedPolygons {
        FVertexID VertexID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumVertexConnectedPolygons params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumPolygonVertices(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices"));
    struct Params_GetNumPolygonVertices {
        FPolygonID PolygonID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumPolygonVertices params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumPolygonInternalEdges(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges"));
    struct Params_GetNumPolygonInternalEdges {
        FPolygonID PolygonID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumPolygonInternalEdges params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMeshDescriptionBase::GetNumEdgeConnectedPolygons(FEdgeID EdgeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons"));
    struct Params_GetNumEdgeConnectedPolygons {
        FEdgeID EdgeID; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumEdgeConnectedPolygons params{};
    params.EdgeID = (FEdgeID)EdgeID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FPolygonID UMeshDescriptionBase::CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon"));
    struct Params_CreatePolygon {
        FPolygonGroupID PolygonGroupID; // 0x0
        char pad_4[0x4];
        TArray<FVertexInstanceID> VertexInstanceIDs; // 0x8
        TArray<FEdgeID> NewEdgeIDs; // 0x18
        FPolygonID ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_CreatePolygon params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    params.VertexInstanceIDs = (TArray<FVertexInstanceID>)VertexInstanceIDs;
    params.NewEdgeIDs = (TArray<FEdgeID>)NewEdgeIDs;
    ProcessEvent(func, &params);
    VertexInstanceIDs = params.VertexInstanceIDs;
    NewEdgeIDs = params.NewEdgeIDs;
    return (FPolygonID)params.ReturnValue;
}
void UMeshDescriptionBase::GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices"));
    struct Params_GetEdgeVertices {
        FEdgeID EdgeID; // 0x0
        char pad_4[0x4];
        TArray<FVertexID> OutVertexIDs; // 0x8
    }; // Size: 0x18
    Params_GetEdgeVertices params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.OutVertexIDs = (TArray<FVertexID>)OutVertexIDs;
    ProcessEvent(func, &params);
    OutVertexIDs = params.OutVertexIDs;
}
FVertexID UMeshDescriptionBase::GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex"));
    struct Params_GetEdgeVertex {
        FEdgeID EdgeID; // 0x0
        int32_t VertexNumber; // 0x4
        FVertexID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetEdgeVertex params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.VertexNumber = (int32_t)VertexNumber;
    ProcessEvent(func, &params);
    return (FVertexID)params.ReturnValue;
}
void UMeshDescriptionBase::GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles"));
    struct Params_GetEdgeConnectedTriangles {
        FEdgeID EdgeID; // 0x0
        char pad_4[0x4];
        TArray<FTriangleID> OutConnectedTriangleIDs; // 0x8
    }; // Size: 0x18
    Params_GetEdgeConnectedTriangles params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.OutConnectedTriangleIDs = (TArray<FTriangleID>)OutConnectedTriangleIDs;
    ProcessEvent(func, &params);
    OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}
void UMeshDescriptionBase::GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons"));
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
void UMeshDescriptionBase::Empty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.Empty"));
    struct Params_Empty {
    }; // Size: 0x0
    Params_Empty params{};
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance"));
    struct Params_DeleteVertexInstance {
        FVertexInstanceID VertexInstanceID; // 0x0
        char pad_4[0x4];
        TArray<FVertexID> OrphanedVertices; // 0x8
    }; // Size: 0x18
    Params_DeleteVertexInstance params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    params.OrphanedVertices = (TArray<FVertexID>)OrphanedVertices;
    ProcessEvent(func, &params);
    OrphanedVertices = params.OrphanedVertices;
}
void UMeshDescriptionBase::DeleteVertex(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex"));
    struct Params_DeleteVertex {
        FVertexID VertexID; // 0x0
    }; // Size: 0x4
    Params_DeleteVertex params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle"));
    struct Params_DeleteTriangle {
        FTriangleID TriangleID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OrphanedEdges; // 0x8
        TArray<FVertexInstanceID> OrphanedVertexInstances; // 0x18
        TArray<FPolygonGroupID> OrphanedPolygonGroupsPtr; // 0x28
    }; // Size: 0x38
    Params_DeleteTriangle params{};
    params.TriangleID = (FTriangleID)TriangleID;
    params.OrphanedEdges = (TArray<FEdgeID>)OrphanedEdges;
    params.OrphanedVertexInstances = (TArray<FVertexInstanceID>)OrphanedVertexInstances;
    params.OrphanedPolygonGroupsPtr = (TArray<FPolygonGroupID>)OrphanedPolygonGroupsPtr;
    ProcessEvent(func, &params);
    OrphanedEdges = params.OrphanedEdges;
    OrphanedPolygonGroupsPtr = params.OrphanedPolygonGroupsPtr;
    OrphanedVertexInstances = params.OrphanedVertexInstances;
}
void UMeshDescriptionBase::DeletePolygonGroup(FPolygonGroupID PolygonGroupID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup"));
    struct Params_DeletePolygonGroup {
        FPolygonGroupID PolygonGroupID; // 0x0
    }; // Size: 0x4
    Params_DeletePolygonGroup params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon"));
    struct Params_DeletePolygon {
        FPolygonID PolygonID; // 0x0
        char pad_4[0x4];
        TArray<FEdgeID> OrphanedEdges; // 0x8
        TArray<FVertexInstanceID> OrphanedVertexInstances; // 0x18
        TArray<FPolygonGroupID> OrphanedPolygonGroups; // 0x28
    }; // Size: 0x38
    Params_DeletePolygon params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.OrphanedEdges = (TArray<FEdgeID>)OrphanedEdges;
    params.OrphanedVertexInstances = (TArray<FVertexInstanceID>)OrphanedVertexInstances;
    params.OrphanedPolygonGroups = (TArray<FPolygonGroupID>)OrphanedPolygonGroups;
    ProcessEvent(func, &params);
    OrphanedVertexInstances = params.OrphanedVertexInstances;
    OrphanedEdges = params.OrphanedEdges;
    OrphanedPolygonGroups = params.OrphanedPolygonGroups;
}
void UMeshDescriptionBase::DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge"));
    struct Params_DeleteEdge {
        FEdgeID EdgeID; // 0x0
        char pad_4[0x4];
        TArray<FVertexID> OrphanedVertices; // 0x8
    }; // Size: 0x18
    Params_DeleteEdge params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.OrphanedVertices = (TArray<FVertexID>)OrphanedVertices;
    ProcessEvent(func, &params);
    OrphanedVertices = params.OrphanedVertices;
}
void UMeshDescriptionBase::CreateVertexWithID(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID"));
    struct Params_CreateVertexWithID {
        FVertexID VertexID; // 0x0
    }; // Size: 0x4
    Params_CreateVertexWithID params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID"));
    struct Params_CreateVertexInstanceWithID {
        FVertexInstanceID VertexInstanceID; // 0x0
        FVertexID VertexID; // 0x4
    }; // Size: 0x8
    Params_CreateVertexInstanceWithID params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
}
FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(FVertexID VertexID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance"));
    struct Params_CreateVertexInstance {
        FVertexID VertexID; // 0x0
        FVertexInstanceID ReturnValue; // 0x4
    }; // Size: 0x8
    Params_CreateVertexInstance params{};
    params.VertexID = (FVertexID)VertexID;
    ProcessEvent(func, &params);
    return (FVertexInstanceID)params.ReturnValue;
}
void UMeshDescriptionBase::CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID"));
    struct Params_CreateTriangleWithID {
        FTriangleID TriangleID; // 0x0
        FPolygonGroupID PolygonGroupID; // 0x4
        TArray<FVertexInstanceID> VertexInstanceIDs; // 0x8
        TArray<FEdgeID> NewEdgeIDs; // 0x18
    }; // Size: 0x28
    Params_CreateTriangleWithID params{};
    params.TriangleID = (FTriangleID)TriangleID;
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    params.VertexInstanceIDs = (TArray<FVertexInstanceID>)VertexInstanceIDs;
    params.NewEdgeIDs = (TArray<FEdgeID>)NewEdgeIDs;
    ProcessEvent(func, &params);
    VertexInstanceIDs = params.VertexInstanceIDs;
    NewEdgeIDs = params.NewEdgeIDs;
}
void UMeshDescriptionBase::CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID"));
    struct Params_CreatePolygonWithID {
        FPolygonID PolygonID; // 0x0
        FPolygonGroupID PolygonGroupID; // 0x4
        TArray<FVertexInstanceID> VertexInstanceIDs; // 0x8
        TArray<FEdgeID> NewEdgeIDs; // 0x18
    }; // Size: 0x28
    Params_CreatePolygonWithID params{};
    params.PolygonID = (FPolygonID)PolygonID;
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    params.VertexInstanceIDs = (TArray<FVertexInstanceID>)VertexInstanceIDs;
    params.NewEdgeIDs = (TArray<FEdgeID>)NewEdgeIDs;
    ProcessEvent(func, &params);
    VertexInstanceIDs = params.VertexInstanceIDs;
    NewEdgeIDs = params.NewEdgeIDs;
}
void UMeshDescriptionBase::CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID"));
    struct Params_CreatePolygonGroupWithID {
        FPolygonGroupID PolygonGroupID; // 0x0
    }; // Size: 0x4
    Params_CreatePolygonGroupWithID params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    ProcessEvent(func, &params);
}
void UMeshDescriptionBase::CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID"));
    struct Params_CreateEdgeWithID {
        FEdgeID EdgeID; // 0x0
        FVertexID VertexID0; // 0x4
        FVertexID VertexID1; // 0x8
    }; // Size: 0xc
    Params_CreateEdgeWithID params{};
    params.EdgeID = (FEdgeID)EdgeID;
    params.VertexID0 = (FVertexID)VertexID0;
    params.VertexID1 = (FVertexID)VertexID1;
    ProcessEvent(func, &params);
}
FEdgeID UMeshDescriptionBase::CreateEdge(FVertexID VertexID0, FVertexID VertexID1) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge"));
    struct Params_CreateEdge {
        FVertexID VertexID0; // 0x0
        FVertexID VertexID1; // 0x4
        FEdgeID ReturnValue; // 0x8
    }; // Size: 0xc
    Params_CreateEdge params{};
    params.VertexID0 = (FVertexID)VertexID0;
    params.VertexID1 = (FVertexID)VertexID1;
    ProcessEvent(func, &params);
    return (FEdgeID)params.ReturnValue;
}
void UMeshDescriptionBase::ComputePolygonTriangulation(FPolygonID PolygonID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation"));
    struct Params_ComputePolygonTriangulation {
        FPolygonID PolygonID; // 0x0
    }; // Size: 0x4
    Params_ComputePolygonTriangulation params{};
    params.PolygonID = (FPolygonID)PolygonID;
    ProcessEvent(func, &params);
}
