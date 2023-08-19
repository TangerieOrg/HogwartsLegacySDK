#include "FBTCompositeChild.hpp"
#include "UBTCompositeNode.hpp"
#include "UBTNode.hpp"
#include "UBTService.hpp"
UBTCompositeNode* UBTCompositeNode::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTCompositeNode");
    return (UBTCompositeNode*)res;
}
