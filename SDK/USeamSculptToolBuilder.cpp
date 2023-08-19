#include "UMeshSurfacePointToolBuilder.hpp"
#include "USeamSculptToolBuilder.hpp"
USeamSculptToolBuilder* USeamSculptToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SeamSculptToolBuilder");
    return (USeamSculptToolBuilder*)res;
}
