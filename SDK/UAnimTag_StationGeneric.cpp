#include "UAnimTag_StationGeneric.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_StationGeneric* UAnimTag_StationGeneric::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimTag_StationGeneric");
    return (UAnimTag_StationGeneric*)res;
}
