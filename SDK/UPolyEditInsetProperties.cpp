#include "UInteractiveToolPropertySet.hpp"
#include "UPolyEditInsetProperties.hpp"
UPolyEditInsetProperties* UPolyEditInsetProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PolyEditInsetProperties");
    return (UPolyEditInsetProperties*)res;
}
