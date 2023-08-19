#include "AInfo.hpp"
#include "AWindAlign.hpp"
#include "UWindAlignComponent.hpp"
AWindAlign* AWindAlign::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindAlign");
    return (AWindAlign*)res;
}
