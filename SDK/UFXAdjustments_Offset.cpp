#include "FVector.hpp"
#include "UFXAdjustments.hpp"
#include "UFXAdjustments_Offset.hpp"
UFXAdjustments_Offset* UFXAdjustments_Offset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_Offset");
    return (UFXAdjustments_Offset*)res;
}
