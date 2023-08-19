#include "UBTAuxiliaryNode.hpp"
#include "UBTNode.hpp"
UBTAuxiliaryNode* UBTAuxiliaryNode::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTAuxiliaryNode");
    return (UBTAuxiliaryNode*)res;
}
