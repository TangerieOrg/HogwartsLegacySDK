#include "UObject.hpp"
#include "UVisual.hpp"
UVisual* UVisual::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Visual");
    return (UVisual*)res;
}
