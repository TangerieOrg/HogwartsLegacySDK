#include "UBaseMediaSource.hpp"
#include "UTimeSynchronizableMediaSource.hpp"
UTimeSynchronizableMediaSource* UTimeSynchronizableMediaSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.TimeSynchronizableMediaSource");
    return (UTimeSynchronizableMediaSource*)res;
}
