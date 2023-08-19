#include "UAddBoxPrimitiveTool.hpp"
#include "UAddPrimitiveTool.hpp"
UAddBoxPrimitiveTool* UAddBoxPrimitiveTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddBoxPrimitiveTool");
    return (UAddBoxPrimitiveTool*)res;
}
