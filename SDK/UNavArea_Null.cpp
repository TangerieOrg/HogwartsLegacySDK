#include "UNavArea.hpp"
#include "UNavArea_Null.hpp"
UNavArea_Null* UNavArea_Null::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavArea_Null");
    return (UNavArea_Null*)res;
}
