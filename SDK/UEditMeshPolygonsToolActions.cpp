#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#include "UEditMeshPolygonsToolActions.hpp"
#include "UFunction.hpp"
void UEditMeshPolygonsToolActions::Flip() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Flip"));
    struct Params_Flip {
    }; // Size: 0x0
    Params_Flip params{};
    ProcessEvent(func, &params);
}
UEditMeshPolygonsToolActions* UEditMeshPolygonsToolActions::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditMeshPolygonsToolActions");
    return (UEditMeshPolygonsToolActions*)res;
}
void UEditMeshPolygonsToolActions::RecalcNormals() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals"));
    struct Params_RecalcNormals {
    }; // Size: 0x0
    Params_RecalcNormals params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::Retriangulate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate"));
    struct Params_Retriangulate {
    }; // Size: 0x0
    Params_Retriangulate params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::Outset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Outset"));
    struct Params_Outset {
    }; // Size: 0x0
    Params_Outset params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::Offset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Offset"));
    struct Params_Offset {
    }; // Size: 0x0
    Params_Offset params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::Merge() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Merge"));
    struct Params_Merge {
    }; // Size: 0x0
    Params_Merge params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::Inset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Inset"));
    struct Params_Inset {
    }; // Size: 0x0
    Params_Inset params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::Extrude() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Extrude"));
    struct Params_Extrude {
    }; // Size: 0x0
    Params_Extrude params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::Disconnect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Disconnect"));
    struct Params_Disconnect {
    }; // Size: 0x0
    Params_Disconnect params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::DELETE() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.DELETE"));
    struct Params_DELETE {
    }; // Size: 0x0
    Params_DELETE params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::Decompose() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Decompose"));
    struct Params_Decompose {
    }; // Size: 0x0
    Params_Decompose params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions::CutFaces() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.CutFaces"));
    struct Params_CutFaces {
    }; // Size: 0x0
    Params_CutFaces params{};
    ProcessEvent(func, &params);
}
