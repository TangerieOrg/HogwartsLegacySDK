#include "UBakedTexture2DImageProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UTexture2D.hpp"
UBakedTexture2DImageProperties* UBakedTexture2DImageProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakedTexture2DImageProperties");
    return (UBakedTexture2DImageProperties*)res;
}
