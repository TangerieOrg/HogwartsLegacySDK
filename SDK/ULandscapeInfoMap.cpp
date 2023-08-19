#include "ULandscapeInfoMap.hpp"
#include "UObject.hpp"
ULandscapeInfoMap* ULandscapeInfoMap::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeInfoMap");
    return (ULandscapeInfoMap*)res;
}
