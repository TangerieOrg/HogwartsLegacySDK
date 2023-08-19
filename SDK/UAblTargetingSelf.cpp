#include "UAblTargetingBase.hpp"
#include "UAblTargetingSelf.hpp"
UAblTargetingSelf* UAblTargetingSelf::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTargetingSelf");
    return (UAblTargetingSelf*)res;
}
