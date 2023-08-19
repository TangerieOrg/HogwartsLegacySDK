#include "EBTFlowAbortMode\Type.hpp"
#include "UBTAuxiliaryNode.hpp"
#include "UBTDecorator.hpp"
UBTDecorator* UBTDecorator::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator");
    return (UBTDecorator*)res;
}
