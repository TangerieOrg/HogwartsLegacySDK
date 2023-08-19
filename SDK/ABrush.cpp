#include "AActor.hpp"
#include "ABrush.hpp"
#include "EBrushType.hpp"
#include "FColor.hpp"
#include "FGeomSelection.hpp"
#include "UBrushComponent.hpp"
#include "UModel.hpp"
ABrush* ABrush::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Brush");
    return (ABrush*)res;
}
