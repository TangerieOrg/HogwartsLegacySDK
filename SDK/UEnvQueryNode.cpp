#include "UEnvQueryNode.hpp"
#include "UObject.hpp"
UEnvQueryNode* UEnvQueryNode::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryNode");
    return (UEnvQueryNode*)res;
}
