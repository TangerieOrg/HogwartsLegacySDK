#include "FNavGraphNode.hpp"
#include "UNavigationGraphNodeComponent.hpp"
#include "USceneComponent.hpp"
UNavigationGraphNodeComponent* UNavigationGraphNodeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationGraphNodeComponent");
    return (UNavigationGraphNodeComponent*)res;
}
