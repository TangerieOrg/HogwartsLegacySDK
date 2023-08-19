#include "UAnimTag_StationStory.hpp"
#include "UAnimTag_StationStoryPreFetch.hpp"
UAnimTag_StationStoryPreFetch* UAnimTag_StationStoryPreFetch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimTag_StationStoryPreFetch");
    return (UAnimTag_StationStoryPreFetch*)res;
}
