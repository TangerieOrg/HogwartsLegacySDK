#include "FTrainNavRenderSplines.hpp"
#include "USplineComponent.hpp"
#include "UTrainNavigationSplineComponent.hpp"
UTrainNavigationSplineComponent* UTrainNavigationSplineComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TrainNavigationSplineComponent");
    return (UTrainNavigationSplineComponent*)res;
}
