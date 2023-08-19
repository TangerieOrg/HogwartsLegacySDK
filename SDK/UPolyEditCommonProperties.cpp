#include "ELocalFrameMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UPolyEditCommonProperties.hpp"
UPolyEditCommonProperties* UPolyEditCommonProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.PolyEditCommonProperties");
    return (UPolyEditCommonProperties*)res;
}
