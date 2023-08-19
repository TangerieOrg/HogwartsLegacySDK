#include "UFXSystemAsset.hpp"
#include "UObject.hpp"
UFXSystemAsset* UFXSystemAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.FXSystemAsset");
    return (UFXSystemAsset*)res;
}
