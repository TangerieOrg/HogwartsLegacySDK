#include "UObject.hpp"
#include "UViewModeUtils.hpp"
UViewModeUtils* UViewModeUtils::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ViewModeUtils");
    return (UViewModeUtils*)res;
}
