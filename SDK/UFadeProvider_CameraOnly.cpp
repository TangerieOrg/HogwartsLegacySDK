#include "APlayerCameraManager.hpp"
#include "UFadeProvider.hpp"
#include "UFadeProvider_CameraOnly.hpp"
UFadeProvider_CameraOnly* UFadeProvider_CameraOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.FadeProvider_CameraOnly");
    return (UFadeProvider_CameraOnly*)res;
}
