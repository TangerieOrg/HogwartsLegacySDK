#include "UAnimationArchitectTagProvider.hpp"
#include "UStationTag_Character.hpp"
UStationTag_Character* UStationTag_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationTag_Character");
    return (UStationTag_Character*)res;
}
