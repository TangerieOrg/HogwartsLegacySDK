#include "ENormalMapSpace.hpp"
#include "EOcclusionMapDistribution.hpp"
#include "EOcclusionMapPreview.hpp"
#include "UBakedOcclusionMapToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UBakedOcclusionMapToolProperties* UBakedOcclusionMapToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakedOcclusionMapToolProperties");
    return (UBakedOcclusionMapToolProperties*)res;
}
