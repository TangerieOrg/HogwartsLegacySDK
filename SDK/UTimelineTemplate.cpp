#include "ETickingGroup.hpp"
#include "ETimelineLengthMode.hpp"
#include "FBPVariableMetaDataEntry.hpp"
#include "FGuid.hpp"
#include "FTTEventTrack.hpp"
#include "FTTFloatTrack.hpp"
#include "FTTLinearColorTrack.hpp"
#include "FTTVectorTrack.hpp"
#include "UObject.hpp"
#include "UTimelineTemplate.hpp"
UTimelineTemplate* UTimelineTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TimelineTemplate");
    return (UTimelineTemplate*)res;
}
