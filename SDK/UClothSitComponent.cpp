#include "UActorComponent.hpp"
#include "UClothSitComponent.hpp"
UClothSitComponent* UClothSitComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ClothSitComponent");
    return (UClothSitComponent*)res;
}
