#include "UOffsetWeightMapSetProperties.hpp"
#include "UWeightMapSetProperties.hpp"
UOffsetWeightMapSetProperties* UOffsetWeightMapSetProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.OffsetWeightMapSetProperties");
    return (UOffsetWeightMapSetProperties*)res;
}
