#include "UAblTargetingBase.hpp"
#include "UAblTargetingInstigator.hpp"
UAblTargetingInstigator* UAblTargetingInstigator::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingInstigator");
    return (UAblTargetingInstigator*)res;
}
