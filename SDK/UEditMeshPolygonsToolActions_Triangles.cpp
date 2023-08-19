#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#include "UEditMeshPolygonsToolActions_Triangles.hpp"
#include "UFunction.hpp"
void UEditMeshPolygonsToolActions_Triangles::Flip() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip"));
    struct Params_Flip {
    }; // Size: 0x0
    Params_Flip params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions_Triangles::Inset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset"));
    struct Params_Inset {
    }; // Size: 0x0
    Params_Inset params{};
    ProcessEvent(func, &params);
}
UEditMeshPolygonsToolActions_Triangles* UEditMeshPolygonsToolActions_Triangles::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles");
    return (UEditMeshPolygonsToolActions_Triangles*)res;
}
void UEditMeshPolygonsToolActions_Triangles::Offset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset"));
    struct Params_Offset {
    }; // Size: 0x0
    Params_Offset params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions_Triangles::RecalcNormals() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals"));
    struct Params_RecalcNormals {
    }; // Size: 0x0
    Params_RecalcNormals params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions_Triangles::Poke() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke"));
    struct Params_Poke {
    }; // Size: 0x0
    Params_Poke params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions_Triangles::Outset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset"));
    struct Params_Outset {
    }; // Size: 0x0
    Params_Outset params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions_Triangles::Extrude() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude"));
    struct Params_Extrude {
    }; // Size: 0x0
    Params_Extrude params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions_Triangles::Disconnect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect"));
    struct Params_Disconnect {
    }; // Size: 0x0
    Params_Disconnect params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions_Triangles::CutFaces() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces"));
    struct Params_CutFaces {
    }; // Size: 0x0
    Params_CutFaces params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolActions_Triangles::DELETE() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.DELETE"));
    struct Params_DELETE {
    }; // Size: 0x0
    Params_DELETE params{};
    ProcessEvent(func, &params);
}
