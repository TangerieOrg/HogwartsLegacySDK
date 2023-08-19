#include "UActorComponent.hpp"
#include "UCameraHeightWithCullingRenderSettingsComponent.hpp"
#include "UMountViewDistanceLimiter.hpp"
UMountViewDistanceLimiter* UMountViewDistanceLimiter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MountViewDistanceLimiter");
    return (UMountViewDistanceLimiter*)res;
}
