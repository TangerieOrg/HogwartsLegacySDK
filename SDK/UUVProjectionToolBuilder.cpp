#include "UInteractiveToolBuilder.hpp"
#include "UUVProjectionToolBuilder.hpp"
UUVProjectionToolBuilder* UUVProjectionToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.UVProjectionToolBuilder");
    return (UUVProjectionToolBuilder*)res;
}
