#include "EEditPivotSnapDragRotationMode.hpp"
#include "UEditPivotToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UEditPivotToolProperties* UEditPivotToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditPivotToolProperties");
    return (UEditPivotToolProperties*)res;
}
