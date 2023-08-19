#include "UInteractiveToolPropertySet.hpp"
#include "UIterativeOffsetProperties.hpp"
UIterativeOffsetProperties* UIterativeOffsetProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.IterativeOffsetProperties");
    return (UIterativeOffsetProperties*)res;
}
