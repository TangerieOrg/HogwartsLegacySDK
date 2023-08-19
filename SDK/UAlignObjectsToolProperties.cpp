#include "EAlignObjectsAlignToOptions.hpp"
#include "EAlignObjectsAlignTypes.hpp"
#include "EAlignObjectsBoxPoint.hpp"
#include "UAlignObjectsToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UAlignObjectsToolProperties* UAlignObjectsToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AlignObjectsToolProperties");
    return (UAlignObjectsToolProperties*)res;
}
