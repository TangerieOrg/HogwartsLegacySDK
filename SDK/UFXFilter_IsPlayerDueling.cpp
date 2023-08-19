#include "UFXFilter.hpp"
#include "UFXFilter_IsPlayerDueling.hpp"
UFXFilter_IsPlayerDueling* UFXFilter_IsPlayerDueling::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsPlayerDueling");
    return (UFXFilter_IsPlayerDueling*)res;
}
