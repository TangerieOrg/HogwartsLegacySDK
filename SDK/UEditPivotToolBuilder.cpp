#include "UEditPivotToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UEditPivotToolBuilder* UEditPivotToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditPivotToolBuilder");
    return (UEditPivotToolBuilder*)res;
}
