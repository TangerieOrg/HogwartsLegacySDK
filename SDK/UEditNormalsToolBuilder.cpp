#include "UEditNormalsToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UEditNormalsToolBuilder* UEditNormalsToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditNormalsToolBuilder");
    return (UEditNormalsToolBuilder*)res;
}
