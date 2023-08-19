#include "EOcclusionCalculationUIMode.hpp"
#include "EOcclusionTriangleSamplingUIMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "URemoveOccludedTrianglesToolProperties.hpp"
URemoveOccludedTrianglesToolProperties* URemoveOccludedTrianglesToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RemoveOccludedTrianglesToolProperties");
    return (URemoveOccludedTrianglesToolProperties*)res;
}
