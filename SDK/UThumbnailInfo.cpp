#include "UObject.hpp"
#include "UThumbnailInfo.hpp"
UThumbnailInfo* UThumbnailInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ThumbnailInfo");
    return (UThumbnailInfo*)res;
}
