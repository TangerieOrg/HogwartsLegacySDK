#include "UInteractiveToolBuilder.hpp"
#include "URemoveOccludedTrianglesToolBuilder.hpp"
URemoveOccludedTrianglesToolBuilder* URemoveOccludedTrianglesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RemoveOccludedTrianglesToolBuilder");
    return (URemoveOccludedTrianglesToolBuilder*)res;
}
