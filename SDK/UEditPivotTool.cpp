#include "FEditPivotTarget.hpp"
#include "UEditPivotTool.hpp"
#include "UEditPivotToolActionPropertySet.hpp"
#include "UEditPivotToolProperties.hpp"
#include "UMultiSelectionTool.hpp"
UEditPivotTool* UEditPivotTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditPivotTool");
    return (UEditPivotTool*)res;
}
