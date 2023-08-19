#include "UBaseMediaSource.hpp"
#include "UMediaSource.hpp"
UBaseMediaSource* UBaseMediaSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.BaseMediaSource");
    return (UBaseMediaSource*)res;
}
