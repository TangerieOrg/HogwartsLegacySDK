#include "UFXAdjustments.hpp"
#include "UFXAdjustments_UseBone.hpp"
UFXAdjustments_UseBone* UFXAdjustments_UseBone::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_UseBone");
    return (UFXAdjustments_UseBone*)res;
}
