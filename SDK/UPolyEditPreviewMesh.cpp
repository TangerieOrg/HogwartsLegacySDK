#include "UPolyEditPreviewMesh.hpp"
#include "UPreviewMesh.hpp"
UPolyEditPreviewMesh* UPolyEditPreviewMesh::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PolyEditPreviewMesh");
    return (UPolyEditPreviewMesh*)res;
}
