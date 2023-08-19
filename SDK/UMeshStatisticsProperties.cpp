#include "UInteractiveToolPropertySet.hpp"
#include "UMeshStatisticsProperties.hpp"
UMeshStatisticsProperties* UMeshStatisticsProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshStatisticsProperties");
    return (UMeshStatisticsProperties*)res;
}
