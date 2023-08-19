#include "UDataAsset.hpp"
#include "UWorldEventCondition.hpp"
UWorldEventCondition* UWorldEventCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition");
    return (UWorldEventCondition*)res;
}
