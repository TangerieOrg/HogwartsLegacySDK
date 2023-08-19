#include "UNavArea.hpp"
#include "UNavArea_Default.hpp"
UNavArea_Default* UNavArea_Default::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavArea_Default");
    return (UNavArea_Default*)res;
}
