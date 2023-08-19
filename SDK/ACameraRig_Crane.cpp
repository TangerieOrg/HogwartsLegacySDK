#include "AActor.hpp"
#include "ACameraRig_Crane.hpp"
#include "USceneComponent.hpp"
ACameraRig_Crane* ACameraRig_Crane::StaticClass() {
    static auto res = find_uobject("Class /Script/CinematicCamera.CameraRig_Crane");
    return (ACameraRig_Crane*)res;
}
