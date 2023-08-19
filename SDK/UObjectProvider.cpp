#include "UBaseProvider.hpp"
#include "UObjectProvider.hpp"
UObjectProvider* UObjectProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ObjectProvider");
    return (UObjectProvider*)res;
}
