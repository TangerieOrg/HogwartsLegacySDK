#include "UDisplaceMeshTextureMapProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UTexture2D.hpp"
UDisplaceMeshTextureMapProperties* UDisplaceMeshTextureMapProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DisplaceMeshTextureMapProperties");
    return (UDisplaceMeshTextureMapProperties*)res;
}
