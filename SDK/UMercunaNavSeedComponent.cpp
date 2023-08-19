#include "UMercunaNavSeedComponent.hpp"
#include "USceneComponent.hpp"
UMercunaNavSeedComponent* UMercunaNavSeedComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaNavSeedComponent");
    return (UMercunaNavSeedComponent*)res;
}
