#include "ULandscapeLODStreamingProxy.hpp"
#include "UStreamableRenderAsset.hpp"
ULandscapeLODStreamingProxy* ULandscapeLODStreamingProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeLODStreamingProxy");
    return (ULandscapeLODStreamingProxy*)res;
}
