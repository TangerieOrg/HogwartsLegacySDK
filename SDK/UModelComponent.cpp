#include "UBodySetup.hpp"
#include "UModelComponent.hpp"
#include "UPrimitiveComponent.hpp"
UModelComponent* UModelComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ModelComponent");
    return (UModelComponent*)res;
}
