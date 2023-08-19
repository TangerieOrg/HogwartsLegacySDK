#include "AActor.hpp"
#include "ACameraStackSplineActor.hpp"
#include "ECameraStackSplineType.hpp"
#include "USplineComponent.hpp"
ACameraStackSplineActor* ACameraStackSplineActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackSplineActor");
    return (ACameraStackSplineActor*)res;
}
