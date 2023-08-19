#include "UNavArea.hpp"
#include "UNavArea_LowHeight.hpp"
UNavArea_LowHeight* UNavArea_LowHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavArea_LowHeight");
    return (UNavArea_LowHeight*)res;
}
