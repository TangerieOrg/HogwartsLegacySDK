#include "UFXUpdate.hpp"
#include "UFXUpdate_SetTimeDilation.hpp"
UFXUpdate_SetTimeDilation* UFXUpdate_SetTimeDilation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_SetTimeDilation");
    return (UFXUpdate_SetTimeDilation*)res;
}
