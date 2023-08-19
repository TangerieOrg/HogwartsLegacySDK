#include "FPolygonGroupID.hpp"
#include "FPolygonID.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVertexInstanceID.hpp"
#include "UFunction.hpp"
#include "UMeshDescriptionBase.hpp"
#include "UStaticMeshDescription.hpp"
UStaticMeshDescription* UStaticMeshDescription::StaticClass() {
    static auto res = find_uobject("Class /Script/StaticMeshDescription.StaticMeshDescription");
    return (UStaticMeshDescription*)res;
}
void UStaticMeshDescription::SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV"));
    struct Params_SetVertexInstanceUV {
        FVertexInstanceID VertexInstanceID; // 0x0
        FVector2D UV; // 0x4
        int32_t UVIndex; // 0xc
    }; // Size: 0x10
    Params_SetVertexInstanceUV params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    params.UV = (FVector2D)UV;
    params.UVIndex = (int32_t)UVIndex;
    ProcessEvent(func, &params);
}
void UStaticMeshDescription::CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube"));
    struct Params_CreateCube {
        FVector Center; // 0x0
        FVector HalfExtents; // 0xc
        FPolygonGroupID PolygonGroup; // 0x18
        FPolygonID PolygonID_PlusX; // 0x1c
        FPolygonID PolygonID_MinusX; // 0x20
        FPolygonID PolygonID_PlusY; // 0x24
        FPolygonID PolygonID_MinusY; // 0x28
        FPolygonID PolygonID_PlusZ; // 0x2c
        FPolygonID PolygonID_MinusZ; // 0x30
    }; // Size: 0x34
    Params_CreateCube params{};
    params.Center = (FVector)Center;
    params.HalfExtents = (FVector)HalfExtents;
    params.PolygonGroup = (FPolygonGroupID)PolygonGroup;
    params.PolygonID_PlusX = (FPolygonID)PolygonID_PlusX;
    params.PolygonID_MinusX = (FPolygonID)PolygonID_MinusX;
    params.PolygonID_PlusY = (FPolygonID)PolygonID_PlusY;
    params.PolygonID_MinusY = (FPolygonID)PolygonID_MinusY;
    params.PolygonID_PlusZ = (FPolygonID)PolygonID_PlusZ;
    params.PolygonID_MinusZ = (FPolygonID)PolygonID_MinusZ;
    ProcessEvent(func, &params);
    PolygonID_PlusX = params.PolygonID_PlusX;
    PolygonID_MinusY = params.PolygonID_MinusY;
    PolygonID_PlusY = params.PolygonID_PlusY;
    PolygonID_MinusX = params.PolygonID_MinusX;
    PolygonID_PlusZ = params.PolygonID_PlusZ;
    PolygonID_MinusZ = params.PolygonID_MinusZ;
}
void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName"));
    struct Params_SetPolygonGroupMaterialSlotName {
        FPolygonGroupID PolygonGroupID; // 0x0
        FName SlotName; // 0x4
    }; // Size: 0xc
    Params_SetPolygonGroupMaterialSlotName params{};
    params.PolygonGroupID = (FPolygonGroupID)PolygonGroupID;
    params.SlotName = (FName)SlotName;
    ProcessEvent(func, &params);
    SlotName = params.SlotName;
}
FVector2D UStaticMeshDescription::GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV"));
    struct Params_GetVertexInstanceUV {
        FVertexInstanceID VertexInstanceID; // 0x0
        int32_t UVIndex; // 0x4
        FVector2D ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetVertexInstanceUV params{};
    params.VertexInstanceID = (FVertexInstanceID)VertexInstanceID;
    params.UVIndex = (int32_t)UVIndex;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
