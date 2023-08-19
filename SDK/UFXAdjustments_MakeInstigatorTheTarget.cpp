#include "UFXAdjustments.hpp"
#include "UFXAdjustments_MakeInstigatorTheTarget.hpp"
UFXAdjustments_MakeInstigatorTheTarget* UFXAdjustments_MakeInstigatorTheTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_MakeInstigatorTheTarget");
    return (UFXAdjustments_MakeInstigatorTheTarget*)res;
}
