#include "FCheckBoxStyle.hpp"
#include "UCheckBoxStyleAsset.hpp"
#include "UObject.hpp"
UCheckBoxStyleAsset* UCheckBoxStyleAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CheckBoxStyleAsset");
    return (UCheckBoxStyleAsset*)res;
}
