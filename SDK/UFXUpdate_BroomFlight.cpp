#include "UFXUpdate_BroomFlight.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_BroomFlight* UFXUpdate_BroomFlight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_BroomFlight");
    return (UFXUpdate_BroomFlight*)res;
}
