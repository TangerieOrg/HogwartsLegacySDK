#include "UBudgeter.hpp"
#include "UClothBudgeter.hpp"
UClothBudgeter* UClothBudgeter::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.ClothBudgeter");
    return (UClothBudgeter*)res;
}
