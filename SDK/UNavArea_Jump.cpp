#include "UNavArea.hpp"
#include "UNavArea_Jump.hpp"
UNavArea_Jump* UNavArea_Jump::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NavArea_Jump");
    return (UNavArea_Jump*)res;
}
