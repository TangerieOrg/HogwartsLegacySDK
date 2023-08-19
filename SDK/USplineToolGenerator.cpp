#include "UActorComponent.hpp"
#include "USplineToolGenerator.hpp"
USplineToolGenerator* USplineToolGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SplineToolGenerator");
    return (USplineToolGenerator*)res;
}
