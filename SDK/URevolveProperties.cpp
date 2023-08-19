#include "ERevolvePropertiesCapFillMode.hpp"
#include "ERevolvePropertiesPolygroupMode.hpp"
#include "ERevolvePropertiesQuadSplit.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "URevolveProperties.hpp"
URevolveProperties* URevolveProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RevolveProperties");
    return (URevolveProperties*)res;
}
