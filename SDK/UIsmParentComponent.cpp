#include "UIsmParentComponent.hpp"
#include "USceneComponent.hpp"
UIsmParentComponent* UIsmParentComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IsmParentComponent");
    return (UIsmParentComponent*)res;
}
