#include "ETransformFunction.hpp"
#include "ULoopingTransformComponent.hpp"
#include "USceneComponent.hpp"
ULoopingTransformComponent* ULoopingTransformComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LoopingTransformComponent");
    return (ULoopingTransformComponent*)res;
}
