#include "UFXAdjustments.hpp"
#include "UFXAdjustments_OnGround.hpp"
UFXAdjustments_OnGround* UFXAdjustments_OnGround::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_OnGround");
    return (UFXAdjustments_OnGround*)res;
}
