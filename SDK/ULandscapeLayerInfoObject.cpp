#include "FLandscapeSeasonParameters.hpp"
#include "FLinearColor.hpp"
#include "ULandscapeLayerInfoObject.hpp"
#include "UObject.hpp"
#include "UPhysicalMaterial.hpp"
ULandscapeLayerInfoObject* ULandscapeLayerInfoObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeLayerInfoObject");
    return (ULandscapeLayerInfoObject*)res;
}
