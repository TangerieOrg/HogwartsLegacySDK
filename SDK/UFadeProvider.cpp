#include "UBaseProvider.hpp"
#include "UFadeProvider.hpp"
UFadeProvider* UFadeProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.FadeProvider");
    return (UFadeProvider*)res;
}
