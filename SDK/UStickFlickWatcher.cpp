#include "UStickFlickWatcher.hpp"
#include "UStickWatcher.hpp"
UStickFlickWatcher* UStickFlickWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.StickFlickWatcher");
    return (UStickFlickWatcher*)res;
}
