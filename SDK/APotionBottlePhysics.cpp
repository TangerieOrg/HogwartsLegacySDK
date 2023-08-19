#include "AActor.hpp"
#include "APotionBottlePhysics.hpp"
#include "FVector.hpp"
#include "UStaticMeshComponent.hpp"
APotionBottlePhysics* APotionBottlePhysics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PotionBottlePhysics");
    return (APotionBottlePhysics*)res;
}
