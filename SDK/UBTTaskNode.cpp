#include "UBTNode.hpp"
#include "UBTService.hpp"
#include "UBTTaskNode.hpp"
UBTTaskNode* UBTTaskNode::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTaskNode");
    return (UBTTaskNode*)res;
}
