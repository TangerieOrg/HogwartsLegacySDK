#include "EMultiFXUse.hpp"
#include "UFXUpdate_Property.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_Property* UFXUpdate_Property::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_Property");
    return (UFXUpdate_Property*)res;
}
