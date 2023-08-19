#include "AActor.hpp"
#include "ANavigationGraphNode.hpp"
ANavigationGraphNode* ANavigationGraphNode::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationGraphNode");
    return (ANavigationGraphNode*)res;
}
