#include "EHoleFillOpFillType.hpp"
#include "UHoleFillToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UHoleFillToolProperties* UHoleFillToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.HoleFillToolProperties");
    return (UHoleFillToolProperties*)res;
}
