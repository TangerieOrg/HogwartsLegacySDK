#include "ABrush.hpp"
#include "AVolume.hpp"
AVolume* AVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Volume");
    return (AVolume*)res;
}
