#include "UObject.hpp"
#include "URemoveOccludedTrianglesOperatorFactory.hpp"
#include "URemoveOccludedTrianglesTool.hpp"
URemoveOccludedTrianglesOperatorFactory* URemoveOccludedTrianglesOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RemoveOccludedTrianglesOperatorFactory");
    return (URemoveOccludedTrianglesOperatorFactory*)res;
}
