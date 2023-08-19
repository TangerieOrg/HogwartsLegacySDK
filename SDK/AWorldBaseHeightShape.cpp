#include "AWorldBaseHeightBase.hpp"
#include "AWorldBaseHeightShape.hpp"
AWorldBaseHeightShape* AWorldBaseHeightShape::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.WorldBaseHeightShape");
    return (AWorldBaseHeightShape*)res;
}
