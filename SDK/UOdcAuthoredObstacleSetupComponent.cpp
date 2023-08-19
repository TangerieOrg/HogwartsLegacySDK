#include "EOdcAuthoredObstacleShape.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "UOdcAuthoredObstacleSetupComponent.hpp"
#include "USceneComponent.hpp"
UOdcAuthoredObstacleSetupComponent* UOdcAuthoredObstacleSetupComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcAuthoredObstacleSetupComponent");
    return (UOdcAuthoredObstacleSetupComponent*)res;
}
