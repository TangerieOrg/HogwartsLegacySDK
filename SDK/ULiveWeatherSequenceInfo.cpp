#include "FWeatherSequenceOrigin.hpp"
#include "ULiveWeatherSequenceInfo.hpp"
#include "UObject.hpp"
#include "USceneRigPlayer.hpp"
#include "UWeatherSequence.hpp"
ULiveWeatherSequenceInfo* ULiveWeatherSequenceInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.LiveWeatherSequenceInfo");
    return (ULiveWeatherSequenceInfo*)res;
}
