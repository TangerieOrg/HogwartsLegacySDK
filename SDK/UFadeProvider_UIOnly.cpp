#include "UFadeProvider.hpp"
#include "UFadeProvider_UIOnly.hpp"
UFadeProvider_UIOnly* UFadeProvider_UIOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FadeProvider_UIOnly");
    return (UFadeProvider_UIOnly*)res;
}
