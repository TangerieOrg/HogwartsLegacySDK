#include "AActor.hpp"
#include "ACameraStackPointOfInterestActor.hpp"
ACameraStackPointOfInterestActor* ACameraStackPointOfInterestActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackPointOfInterestActor");
    return (ACameraStackPointOfInterestActor*)res;
}
