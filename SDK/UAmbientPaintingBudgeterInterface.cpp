#include "UAmbientPaintingBudgeterInterface.hpp"
#include "UInterface.hpp"
UAmbientPaintingBudgeterInterface* UAmbientPaintingBudgeterInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbientPaintingBudgeterInterface");
    return (UAmbientPaintingBudgeterInterface*)res;
}
