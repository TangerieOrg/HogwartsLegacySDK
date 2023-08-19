#include "UAlignObjectsTool.hpp"
#include "UAlignObjectsToolProperties.hpp"
#include "UMultiSelectionTool.hpp"
UAlignObjectsTool* UAlignObjectsTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AlignObjectsTool");
    return (UAlignObjectsTool*)res;
}
