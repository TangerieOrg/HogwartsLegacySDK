#include "FBuilderPoly.hpp"
#include "FVector.hpp"
#include "UBrushBuilder.hpp"
#include "UObject.hpp"
UBrushBuilder* UBrushBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BrushBuilder");
    return (UBrushBuilder*)res;
}
