#include "FColor.hpp"
#include "UBodySetup.hpp"
#include "UClass.hpp"
#include "UPrimitiveComponent.hpp"
#include "UShapeComponent.hpp"
UShapeComponent* UShapeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ShapeComponent");
    return (UShapeComponent*)res;
}
