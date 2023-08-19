#include "AActor.hpp"
#include "UDynamicMeshBrushTool.hpp"
#include "UMeshSelectionEditActions.hpp"
#include "UMeshSelectionSet.hpp"
#include "UMeshSelectionTool.hpp"
#include "UMeshSelectionToolActionPropertySet.hpp"
#include "UMeshSelectionToolProperties.hpp"
UMeshSelectionTool* UMeshSelectionTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSelectionTool");
    return (UMeshSelectionTool*)res;
}
