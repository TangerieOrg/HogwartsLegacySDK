#include "UInteractiveToolPropertySet.hpp"
#include "UPolyEditOutsetProperties.hpp"
UPolyEditOutsetProperties* UPolyEditOutsetProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PolyEditOutsetProperties");
    return (UPolyEditOutsetProperties*)res;
}
