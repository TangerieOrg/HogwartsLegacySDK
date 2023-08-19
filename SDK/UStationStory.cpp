#include "UAnimationSet_TagLookup.hpp"
#include "USceneRigStory.hpp"
#include "UStationStory.hpp"
UStationStory* UStationStory::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationStory");
    return (UStationStory*)res;
}
