#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#include "UEditMeshPolygonsToolEdgeActions.hpp"
#include "UFunction.hpp"
UEditMeshPolygonsToolEdgeActions* UEditMeshPolygonsToolEdgeActions::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions");
    return (UEditMeshPolygonsToolEdgeActions*)res;
}
void UEditMeshPolygonsToolEdgeActions::Weld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld"));
    struct Params_Weld {
    }; // Size: 0x0
    Params_Weld params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolEdgeActions::Straighten() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten"));
    struct Params_Straighten {
    }; // Size: 0x0
    Params_Straighten params{};
    ProcessEvent(func, &params);
}
void UEditMeshPolygonsToolEdgeActions::FillHole() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole"));
    struct Params_FillHole {
    }; // Size: 0x0
    Params_FillHole params{};
    ProcessEvent(func, &params);
}
