#include "UBudgeter.hpp"
#include "UObject.hpp"
UBudgeter* UBudgeter::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.Budgeter");
    return (UBudgeter*)res;
}
