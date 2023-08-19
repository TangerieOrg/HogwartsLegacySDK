#include "UFXUpdate_Tick.hpp"
#include "UFXUpdate_UpdateLocation.hpp"
UFXUpdate_UpdateLocation* UFXUpdate_UpdateLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_UpdateLocation");
    return (UFXUpdate_UpdateLocation*)res;
}
