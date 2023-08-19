#include "APSOCachingCameraActor.hpp"
#include "APawn.hpp"
APSOCachingCameraActor* APSOCachingCameraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/PSOCaching.PSOCachingCameraActor");
    return (APSOCachingCameraActor*)res;
}
