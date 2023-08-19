#include "UEditMeshPolygonsToolActionPropertySet.hpp"
#include "UEditMeshPolygonsToolUVActions.hpp"
#include "UFunction.hpp"
UEditMeshPolygonsToolUVActions* UEditMeshPolygonsToolUVActions::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditMeshPolygonsToolUVActions");
    return (UEditMeshPolygonsToolUVActions*)res;
}
void UEditMeshPolygonsToolUVActions::PlanarProjection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection"));
    struct Params_PlanarProjection {
    }; // Size: 0x0
    Params_PlanarProjection params{};
    ProcessEvent(func, &params);
}
