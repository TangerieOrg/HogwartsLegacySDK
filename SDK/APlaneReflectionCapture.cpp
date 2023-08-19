#include "APlaneReflectionCapture.hpp"
#include "AReflectionCapture.hpp"
APlaneReflectionCapture* APlaneReflectionCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlaneReflectionCapture");
    return (APlaneReflectionCapture*)res;
}
