#include "UAddConePrimitiveTool.hpp"
#include "UAddPrimitiveTool.hpp"
UAddConePrimitiveTool* UAddConePrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddConePrimitiveTool");
    return (UAddConePrimitiveTool*)res;
}
