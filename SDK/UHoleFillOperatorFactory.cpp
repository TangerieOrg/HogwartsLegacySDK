#include "UHoleFillOperatorFactory.hpp"
#include "UHoleFillTool.hpp"
#include "UObject.hpp"
UHoleFillOperatorFactory* UHoleFillOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.HoleFillOperatorFactory");
    return (UHoleFillOperatorFactory*)res;
}
