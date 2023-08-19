#include "ULightCullingProvider.hpp"
#include "UObject.hpp"
ULightCullingProvider* ULightCullingProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LightCullingProvider");
    return (ULightCullingProvider*)res;
}
