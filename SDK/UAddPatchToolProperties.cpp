#include "UAddPatchToolProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UAddPatchToolProperties* UAddPatchToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddPatchToolProperties");
    return (UAddPatchToolProperties*)res;
}
