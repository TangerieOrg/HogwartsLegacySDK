#include "UFXFilter.hpp"
#include "UFXFilter_HighContrastGameplay.hpp"
UFXFilter_HighContrastGameplay* UFXFilter_HighContrastGameplay::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_HighContrastGameplay");
    return (UFXFilter_HighContrastGameplay*)res;
}
