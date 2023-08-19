#include "UAddPatchToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UAddPatchToolBuilder* UAddPatchToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddPatchToolBuilder");
    return (UAddPatchToolBuilder*)res;
}
