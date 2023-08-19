#include "UFXAdjustments.hpp"
#include "UFXAdjustments_InstigatorScale.hpp"
UFXAdjustments_InstigatorScale* UFXAdjustments_InstigatorScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_InstigatorScale");
    return (UFXAdjustments_InstigatorScale*)res;
}
