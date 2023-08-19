#include "UNavArea.hpp"
#include "UNavArea_Vertical.hpp"
UNavArea_Vertical* UNavArea_Vertical::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NavArea_Vertical");
    return (UNavArea_Vertical*)res;
}
