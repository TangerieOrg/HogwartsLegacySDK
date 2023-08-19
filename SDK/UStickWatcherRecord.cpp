#include "UCurveFloat.hpp"
#include "UStickWatcherRecord.hpp"
#include "UWatcherRecord.hpp"
UStickWatcherRecord* UStickWatcherRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.StickWatcherRecord");
    return (UStickWatcherRecord*)res;
}
