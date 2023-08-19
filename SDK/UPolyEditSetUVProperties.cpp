#include "UInteractiveToolPropertySet.hpp"
#include "UPolyEditSetUVProperties.hpp"
UPolyEditSetUVProperties* UPolyEditSetUVProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PolyEditSetUVProperties");
    return (UPolyEditSetUVProperties*)res;
}
