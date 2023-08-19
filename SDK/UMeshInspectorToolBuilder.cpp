#include "UInteractiveToolBuilder.hpp"
#include "UMeshInspectorToolBuilder.hpp"
UMeshInspectorToolBuilder* UMeshInspectorToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshInspectorToolBuilder");
    return (UMeshInspectorToolBuilder*)res;
}
