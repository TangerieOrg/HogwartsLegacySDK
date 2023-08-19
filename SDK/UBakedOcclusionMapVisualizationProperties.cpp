#include "UBakedOcclusionMapVisualizationProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UBakedOcclusionMapVisualizationProperties* UBakedOcclusionMapVisualizationProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakedOcclusionMapVisualizationProperties");
    return (UBakedOcclusionMapVisualizationProperties*)res;
}
