#include "UDrawPolyPathToolBuilder.hpp"
#include "UMeshSurfacePointToolBuilder.hpp"
UDrawPolyPathToolBuilder* UDrawPolyPathToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawPolyPathToolBuilder");
    return (UDrawPolyPathToolBuilder*)res;
}
