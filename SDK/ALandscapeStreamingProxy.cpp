#include "ALandscapeProxy.hpp"
#include "ALandscapeStreamingProxy.hpp"
ALandscapeStreamingProxy* ALandscapeStreamingProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeStreamingProxy");
    return (ALandscapeStreamingProxy*)res;
}
