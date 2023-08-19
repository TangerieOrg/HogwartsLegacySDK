#include "UEditUVIslandsTool.hpp"
#include "UExistingMeshMaterialProperties.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMeshSurfacePointTool.hpp"
#include "UMultiTransformer.hpp"
#include "UPolygonSelectionMechanic.hpp"
#include "USimpleDynamicMeshComponent.hpp"
UEditUVIslandsTool* UEditUVIslandsTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditUVIslandsTool");
    return (UEditUVIslandsTool*)res;
}
