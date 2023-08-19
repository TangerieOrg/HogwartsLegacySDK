#include "UBaseArchitectMonolithicAsset.hpp"
#include "UObjectArchitectMonolithicAsset.hpp"
UObjectArchitectMonolithicAsset* UObjectArchitectMonolithicAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.ObjectArchitectMonolithicAsset");
    return (UObjectArchitectMonolithicAsset*)res;
}
