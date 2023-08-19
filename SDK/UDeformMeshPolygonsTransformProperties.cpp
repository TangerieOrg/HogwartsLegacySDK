#include "EGroupTopologyDeformationStrategy.hpp"
#include "EQuickTransformerMode.hpp"
#include "EWeightScheme.hpp"
#include "UDeformMeshPolygonsTransformProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UDeformMeshPolygonsTransformProperties* UDeformMeshPolygonsTransformProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DeformMeshPolygonsTransformProperties");
    return (UDeformMeshPolygonsTransformProperties*)res;
}
