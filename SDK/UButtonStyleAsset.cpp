#include "FButtonStyle.hpp"
#include "UButtonStyleAsset.hpp"
#include "UObject.hpp"
UButtonStyleAsset* UButtonStyleAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ButtonStyleAsset");
    return (UButtonStyleAsset*)res;
}
