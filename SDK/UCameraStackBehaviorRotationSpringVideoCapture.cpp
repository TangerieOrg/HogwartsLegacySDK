#include "UCameraStackBehaviorRotationSpring.hpp"
#include "UCameraStackBehaviorRotationSpringVideoCapture.hpp"
UCameraStackBehaviorRotationSpringVideoCapture* UCameraStackBehaviorRotationSpringVideoCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorRotationSpringVideoCapture");
    return (UCameraStackBehaviorRotationSpringVideoCapture*)res;
}
