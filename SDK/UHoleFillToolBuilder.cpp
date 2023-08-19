#include "UHoleFillToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UHoleFillToolBuilder* UHoleFillToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.HoleFillToolBuilder");
    return (UHoleFillToolBuilder*)res;
}
