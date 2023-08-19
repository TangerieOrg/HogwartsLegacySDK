#include "EMeshSculptFalloffType.hpp"
#include "EMeshVertexSculptBrushType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UVertexBrushSculptProperties.hpp"
UVertexBrushSculptProperties* UVertexBrushSculptProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.VertexBrushSculptProperties");
    return (UVertexBrushSculptProperties*)res;
}
