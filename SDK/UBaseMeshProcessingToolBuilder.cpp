#include "UBaseMeshProcessingToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UBaseMeshProcessingToolBuilder* UBaseMeshProcessingToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.BaseMeshProcessingToolBuilder");
    return (UBaseMeshProcessingToolBuilder*)res;
}
