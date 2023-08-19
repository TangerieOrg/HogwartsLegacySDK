#include "UAddPrimitiveTool.hpp"
#include "UAddTorusPrimitiveTool.hpp"
UAddTorusPrimitiveTool* UAddTorusPrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddTorusPrimitiveTool");
    return (UAddTorusPrimitiveTool*)res;
}
