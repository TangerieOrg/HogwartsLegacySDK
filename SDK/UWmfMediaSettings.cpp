#include "UObject.hpp"
#include "UWmfMediaSettings.hpp"
UWmfMediaSettings* UWmfMediaSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/WmfMediaFactory.WmfMediaSettings");
    return (UWmfMediaSettings*)res;
}
