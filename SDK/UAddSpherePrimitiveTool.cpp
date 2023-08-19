#include "UAddPrimitiveTool.hpp"
#include "UAddSpherePrimitiveTool.hpp"
UAddSpherePrimitiveTool* UAddSpherePrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddSpherePrimitiveTool");
    return (UAddSpherePrimitiveTool*)res;
}
