#include "UInteractiveToolPropertySet.hpp"
#include "USmoothHoleFillProperties.hpp"
USmoothHoleFillProperties* USmoothHoleFillProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SmoothHoleFillProperties");
    return (USmoothHoleFillProperties*)res;
}
