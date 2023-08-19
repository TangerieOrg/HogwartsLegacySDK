#include "ACameraBlockingVolume.hpp"
#include "AVolume.hpp"
ACameraBlockingVolume* ACameraBlockingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraBlockingVolume");
    return (ACameraBlockingVolume*)res;
}
