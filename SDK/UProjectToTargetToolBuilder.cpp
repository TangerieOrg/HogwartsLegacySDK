#include "UInteractiveToolBuilder.hpp"
#include "UProjectToTargetToolBuilder.hpp"
UProjectToTargetToolBuilder* UProjectToTargetToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ProjectToTargetToolBuilder");
    return (UProjectToTargetToolBuilder*)res;
}
