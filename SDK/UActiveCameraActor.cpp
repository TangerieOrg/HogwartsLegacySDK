#include "UActiveCameraActor.hpp"
#include "UInterface.hpp"
UActiveCameraActor* UActiveCameraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ActiveCameraActor");
    return (UActiveCameraActor*)res;
}
