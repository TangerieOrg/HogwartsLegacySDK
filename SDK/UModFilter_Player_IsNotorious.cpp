#include "UModFilter_Player_Base.hpp"
#include "UModFilter_Player_IsNotorious.hpp"
UModFilter_Player_IsNotorious* UModFilter_Player_IsNotorious::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Player_IsNotorious");
    return (UModFilter_Player_IsNotorious*)res;
}
