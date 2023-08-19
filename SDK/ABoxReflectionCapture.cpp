#include "ABoxReflectionCapture.hpp"
#include "AReflectionCapture.hpp"
ABoxReflectionCapture* ABoxReflectionCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BoxReflectionCapture");
    return (ABoxReflectionCapture*)res;
}
