#include "AWorldBaseHeightDisk.hpp"
#include "AWorldBaseHeightShape.hpp"
AWorldBaseHeightDisk* AWorldBaseHeightDisk::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.WorldBaseHeightDisk");
    return (AWorldBaseHeightDisk*)res;
}
