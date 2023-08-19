#include "UNavArea.hpp"
#include "UNavArea_Fall.hpp"
UNavArea_Fall* UNavArea_Fall::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NavArea_Fall");
    return (UNavArea_Fall*)res;
}
