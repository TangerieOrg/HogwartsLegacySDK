#include "UAnimationArchitectTagProvider.hpp"
#include "UObject.hpp"
UAnimationArchitectTagProvider* UAnimationArchitectTagProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitectTagProvider");
    return (UAnimationArchitectTagProvider*)res;
}
