#include "FTimespan.hpp"
#include "UMediaTimeStampInfo.hpp"
#include "UObject.hpp"
UMediaTimeStampInfo* UMediaTimeStampInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.MediaTimeStampInfo");
    return (UMediaTimeStampInfo*)res;
}
