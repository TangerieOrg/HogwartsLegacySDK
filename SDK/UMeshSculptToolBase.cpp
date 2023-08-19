#include "UBrushStampIndicator.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMeshEditingViewProperties.hpp"
#include "UMeshSculptToolBase.hpp"
#include "UMeshSurfacePointTool.hpp"
#include "UPreviewMesh.hpp"
#include "USculptBrushProperties.hpp"
#include "UTransformGizmo.hpp"
#include "UTransformProxy.hpp"
#include "UWorkPlaneProperties.hpp"
UMeshSculptToolBase* UMeshSculptToolBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshSculptToolBase");
    return (UMeshSculptToolBase*)res;
}
