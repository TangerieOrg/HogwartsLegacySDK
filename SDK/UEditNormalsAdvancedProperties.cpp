#include "UEditNormalsAdvancedProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UEditNormalsAdvancedProperties* UEditNormalsAdvancedProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditNormalsAdvancedProperties");
    return (UEditNormalsAdvancedProperties*)res;
}
