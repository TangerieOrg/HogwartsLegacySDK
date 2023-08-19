#include "ATrain.hpp"
#include "AWorldEventActor.hpp"
#include "ETrainType.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UTrainNavigationSplineComponent.hpp"
ATrain* ATrain::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Train");
    return (ATrain*)res;
}
