#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_PlayerScore.hpp"
UWorldEventCondition_PlayerScore* UWorldEventCondition_PlayerScore::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_PlayerScore");
    return (UWorldEventCondition_PlayerScore*)res;
}
