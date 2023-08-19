#include "UMeshSculptBrushOpProps.hpp"
#include "UPinchBrushOpProps.hpp"
UPinchBrushOpProps* UPinchBrushOpProps::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PinchBrushOpProps");
    return (UPinchBrushOpProps*)res;
}
