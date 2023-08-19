#include "EPolyEditExtrudeDirection.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UPolyEditExtrudeProperties.hpp"
UPolyEditExtrudeProperties* UPolyEditExtrudeProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PolyEditExtrudeProperties");
    return (UPolyEditExtrudeProperties*)res;
}
