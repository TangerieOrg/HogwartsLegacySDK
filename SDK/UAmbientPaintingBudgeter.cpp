#include "UAmbientPaintingBudgeter.hpp"
#include "UBudgeter.hpp"
UAmbientPaintingBudgeter* UAmbientPaintingBudgeter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbientPaintingBudgeter");
    return (UAmbientPaintingBudgeter*)res;
}
