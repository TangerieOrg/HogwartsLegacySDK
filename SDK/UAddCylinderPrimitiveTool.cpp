#include "UAddCylinderPrimitiveTool.hpp"
#include "UAddPrimitiveTool.hpp"
UAddCylinderPrimitiveTool* UAddCylinderPrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddCylinderPrimitiveTool");
    return (UAddCylinderPrimitiveTool*)res;
}
