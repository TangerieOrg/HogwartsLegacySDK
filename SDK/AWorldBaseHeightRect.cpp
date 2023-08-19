#include "AWorldBaseHeightRect.hpp"
#include "AWorldBaseHeightShape.hpp"
AWorldBaseHeightRect* AWorldBaseHeightRect::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.WorldBaseHeightRect");
    return (AWorldBaseHeightRect*)res;
}
