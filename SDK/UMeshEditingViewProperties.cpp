#include "EMeshEditingMaterialModes.hpp"
#include "FLinearColor.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UMeshEditingViewProperties.hpp"
#include "UTexture2D.hpp"
UMeshEditingViewProperties* UMeshEditingViewProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MeshEditingViewProperties");
    return (UMeshEditingViewProperties*)res;
}
