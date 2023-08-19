#include "USoundNode.hpp"
#include "USoundNodeBranch.hpp"
USoundNodeBranch* USoundNodeBranch::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeBranch");
    return (USoundNodeBranch*)res;
}
