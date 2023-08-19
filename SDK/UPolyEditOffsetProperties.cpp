#include "UInteractiveToolPropertySet.hpp"
#include "UPolyEditOffsetProperties.hpp"
UPolyEditOffsetProperties* UPolyEditOffsetProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PolyEditOffsetProperties");
    return (UPolyEditOffsetProperties*)res;
}
