#include "UFadeProvider.hpp"
#include "UFadeProvider_All.hpp"
UFadeProvider_All* UFadeProvider_All::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FadeProvider_All");
    return (UFadeProvider_All*)res;
}
