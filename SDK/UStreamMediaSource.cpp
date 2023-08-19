#include "UBaseMediaSource.hpp"
#include "UStreamMediaSource.hpp"
UStreamMediaSource* UStreamMediaSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.StreamMediaSource");
    return (UStreamMediaSource*)res;
}
