#include "UAddPrimitiveTool.hpp"
#include "UAddSphericalBoxPrimitiveTool.hpp"
UAddSphericalBoxPrimitiveTool* UAddSphericalBoxPrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddSphericalBoxPrimitiveTool");
    return (UAddSphericalBoxPrimitiveTool*)res;
}
