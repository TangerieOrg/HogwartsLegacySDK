#include "UInteractiveToolPropertySet.hpp"
#include "UUVProjectionAdvancedProperties.hpp"
UUVProjectionAdvancedProperties* UUVProjectionAdvancedProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.UVProjectionAdvancedProperties");
    return (UUVProjectionAdvancedProperties*)res;
}
