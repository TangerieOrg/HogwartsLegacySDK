#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#include "UEditMeshPolygonsToolEdgeActions_Triangles.hpp"
#include "UFunction.hpp"
void UEditMeshPolygonsToolEdgeActions_Triangles::Collapse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse"));
    struct Params_Collapse {
    }; // Size: 0x0
    Params_Collapse params{};
    ProcessEvent(func, &params);
}
UEditMeshPolygonsToolEdgeActions_Triangles* UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles");
    return (UEditMeshPolygonsToolEdgeActions_Triangles*)res;
}
void UEditMeshPolygonsToolEdgeActions_Triangles::Weld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld"));
    struct Params_Weld {
    }; // Size: 0x0
    Params_Weld params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolEdgeActions_Triangles::Flip() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip"));
    struct Params_Flip {
    }; // Size: 0x0
    Params_Flip params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolEdgeActions_Triangles::Split() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split"));
    struct Params_Split {
    }; // Size: 0x0
    Params_Split params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolEdgeActions_Triangles::FillHole() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole"));
    struct Params_FillHole {
    }; // Size: 0x0
    Params_FillHole params{};
    ProcessEvent(func, &params);
}
