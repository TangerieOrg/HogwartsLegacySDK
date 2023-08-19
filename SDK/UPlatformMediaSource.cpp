#include "UMediaSource.hpp"
#include "UPlatformMediaSource.hpp"
UPlatformMediaSource* UPlatformMediaSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.PlatformMediaSource");
    return (UPlatformMediaSource*)res;
}
