#include "UAnimTag_StationStory.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_StationStory* UAnimTag_StationStory::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimTag_StationStory");
    return (UAnimTag_StationStory*)res;
}
