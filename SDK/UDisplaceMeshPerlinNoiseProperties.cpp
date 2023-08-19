#include "FPerlinLayerProperties.hpp"
#include "UDisplaceMeshPerlinNoiseProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDisplaceMeshPerlinNoiseProperties* UDisplaceMeshPerlinNoiseProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DisplaceMeshPerlinNoiseProperties");
    return (UDisplaceMeshPerlinNoiseProperties*)res;
}
