#include "ULineBatchComponent.hpp"
#include "UMaterialInterface.hpp"
#include "UPrimitiveComponent.hpp"
ULineBatchComponent* ULineBatchComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LineBatchComponent");
    return (ULineBatchComponent*)res;
}
