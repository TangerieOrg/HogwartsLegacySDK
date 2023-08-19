#include "UAnimTag_RigType.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_RigType* UAnimTag_RigType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimTag_RigType");
    return (UAnimTag_RigType*)res;
}
