#include "ABlockingVolume.hpp"
#include "AVolume.hpp"
ABlockingVolume* ABlockingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlockingVolume");
    return (ABlockingVolume*)res;
}
