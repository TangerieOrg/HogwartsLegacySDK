#include "ALandscapeStreamingProxy.hpp"
#include "FGuid.hpp"
#include "FVector.hpp"
#include "ULandscapeInfo.hpp"
#include "UObject.hpp"
ULandscapeInfo* ULandscapeInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeInfo");
    return (ULandscapeInfo*)res;
}
