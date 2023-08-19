#include "USmoothWeightMapSetProperties.hpp"
#include "UWeightMapSetProperties.hpp"
USmoothWeightMapSetProperties* USmoothWeightMapSetProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SmoothWeightMapSetProperties");
    return (USmoothWeightMapSetProperties*)res;
}
