#include "ENormalCalculationMethod.hpp"
#include "ESplitNormalMethod.hpp"
#include "UEditNormalsToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UEditNormalsToolProperties* UEditNormalsToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditNormalsToolProperties");
    return (UEditNormalsToolProperties*)res;
}
