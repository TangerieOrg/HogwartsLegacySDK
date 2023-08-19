#include "UClothBudgeterInterface.hpp"
#include "UInterface.hpp"
UClothBudgeterInterface* UClothBudgeterInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.ClothBudgeterInterface");
    return (UClothBudgeterInterface*)res;
}
