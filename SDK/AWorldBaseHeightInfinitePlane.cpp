#include "AWorldBaseHeightBase.hpp"
#include "AWorldBaseHeightInfinitePlane.hpp"
AWorldBaseHeightInfinitePlane* AWorldBaseHeightInfinitePlane::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.WorldBaseHeightInfinitePlane");
    return (AWorldBaseHeightInfinitePlane*)res;
}
