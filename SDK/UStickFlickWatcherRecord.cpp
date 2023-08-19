#include "UStickFlickWatcherRecord.hpp"
#include "UStickWatcherRecord.hpp"
UStickFlickWatcherRecord* UStickFlickWatcherRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.StickFlickWatcherRecord");
    return (UStickFlickWatcherRecord*)res;
}
