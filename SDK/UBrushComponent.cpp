#include "UBodySetup.hpp"
#include "UBrushComponent.hpp"
#include "UModel.hpp"
#include "UPrimitiveComponent.hpp"
UBrushComponent* UBrushComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BrushComponent");
    return (UBrushComponent*)res;
}
