#include "UFXAdjustments.hpp"
#include "UFXAdjustments_Or.hpp"
UFXAdjustments_Or* UFXAdjustments_Or::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_Or");
    return (UFXAdjustments_Or*)res;
}
