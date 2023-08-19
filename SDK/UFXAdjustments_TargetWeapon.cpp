#include "UFXAdjustments.hpp"
#include "UFXAdjustments_TargetWeapon.hpp"
UFXAdjustments_TargetWeapon* UFXAdjustments_TargetWeapon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_TargetWeapon");
    return (UFXAdjustments_TargetWeapon*)res;
}
