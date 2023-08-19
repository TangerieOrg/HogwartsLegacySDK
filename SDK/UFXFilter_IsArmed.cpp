#include "UFXFilter.hpp"
#include "UFXFilter_IsArmed.hpp"
UFXFilter_IsArmed* UFXFilter_IsArmed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsArmed");
    return (UFXFilter_IsArmed*)res;
}
