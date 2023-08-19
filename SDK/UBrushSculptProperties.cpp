#include "EDynamicMeshSculptBrushType.hpp"
#include "UBrushSculptProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UBrushSculptProperties* UBrushSculptProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BrushSculptProperties");
    return (UBrushSculptProperties*)res;
}
