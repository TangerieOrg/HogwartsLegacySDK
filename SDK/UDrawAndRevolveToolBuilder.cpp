#include "UDrawAndRevolveToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UDrawAndRevolveToolBuilder* UDrawAndRevolveToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.DrawAndRevolveToolBuilder");
    return (UDrawAndRevolveToolBuilder*)res;
}
