#include "UObject.hpp"
#include "USoundNode.hpp"
USoundNode* USoundNode::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNode");
    return (USoundNode*)res;
}
