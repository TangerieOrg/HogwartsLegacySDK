#include "UMercunaObstacleComponent.hpp"
#include "USceneComponent.hpp"
UMercunaObstacleComponent* UMercunaObstacleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaObstacleComponent");
    return (UMercunaObstacleComponent*)res;
}
