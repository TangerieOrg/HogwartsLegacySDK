#include "UFXFilter.hpp"
#include "UFXFilter_Season.hpp"
UFXFilter_Season* UFXFilter_Season::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_Season");
    return (UFXFilter_Season*)res;
}
