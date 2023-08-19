#include "UAblAbilityNode.hpp"
#include "UObject.hpp"
UAblAbilityNode* UAblAbilityNode::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityNode");
    return (UAblAbilityNode*)res;
}
