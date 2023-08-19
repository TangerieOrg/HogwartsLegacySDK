#include "ABrush.hpp"
#include "ABrushShape.hpp"
ABrushShape* ABrushShape::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BrushShape");
    return (ABrushShape*)res;
}
