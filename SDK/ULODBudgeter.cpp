#include "UBudgeter.hpp"
#include "ULODBudgeter.hpp"
ULODBudgeter* ULODBudgeter::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.LODBudgeter");
    return (ULODBudgeter*)res;
}
